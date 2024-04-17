#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
	This program uses the srand() function to create
	an array of 20 integers with each index having a 
	random value.
	After the array is created, it will list the minimum value
	and the maximum value. 
	The user can then enter a number to find in the array. 
*/

int main()
{
	//Declaration of variables and initialization.
	int low;
	int high;
	int max;
	int min;
	int r[20];
	int S;
	int j = 0;

	//User input of min and max value for array.
	srand(time(NULL));
	printf("Array of 20 random integers.\n");
	printf("Please enter the lowest possible value: ");
	scanf_s("%d", &low);
	printf("Please enter the highest possible value: ");
	scanf_s("%d", &high);

	//A for loop that will populate the array and display the values.
	for (int i = 0; i < 20; i++)
	{
		r[i] = rand() % (high - low) + low;
		printf("[%d] ", r[i]);

	}

	//This will find the max and min value.
	//Then print the values.
	max = low;
	min = high;
	for (int i = 0; i < 20; i++)
	{
		if (max <= r[i]+1)
			max = r[i];
		if (min >= r[i]+1)
			min = r[i];
	}

	printf("minimum number in array is: %d\nMaximum number in array is: %d\n", min, max);

	//This section controls the searching process.
	//the user will enter a value and the code will search
	//for that value in the array. if present, it will display 
	//at which index it is at. 
	//otherwise it will mention that the value was not found. 
	printf("Enter a value to search for in your array.");
	scanf_s("%d", &S);
	for (int i = 0; i < 20; i++)
	{
		if (S == r[i])
		{
			printf("The value is found at array index %d\n", i);
			j++;
		}
	}
	if (j == 0)
		printf("No value was found.");


	return 0;
}
