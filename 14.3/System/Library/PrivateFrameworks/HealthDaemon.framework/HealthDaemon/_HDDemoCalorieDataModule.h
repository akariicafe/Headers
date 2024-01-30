@interface _HDDemoCalorieDataModule : _HDDemoDataModule

- (double)nextFireInterval;
- (void)timerDidFireWithInterval:(double)a0;
- (double)_caloriesBurnedWithTimeInterval:(double)a0;

@end
