@class _HKSampleQueryUtility, NSArray, HKHealthStore, HKQuantitySeriesSampleQuery, HKWorkout;

@interface _HKHeartRateRecoveryQueryUtility : NSObject {
    HKHealthStore *_healthStore;
    HKWorkout *_workout;
    HKQuantitySeriesSampleQuery *_heartRateQuery;
    _HKSampleQueryUtility *_workoutQueryUtility;
    id /* block */ _handler;
    NSArray *_heartRateReadings;
}

+ (id)recoveryDateIntervalWithWorkout:(id)a0;
+ (id)predicateForWorkoutRecoveryTimeWithWorkout:(id)a0;
+ (id)workoutRecoveryDateIntervalForWorkout:(id)a0 overlappingWorkouts:(id)a1;
+ (id)workoutRecoveryHeartRatesForWorkout:(id)a0 recoveryDateInterval:(id)a1 readings:(id)a2;
+ (id)_recoveryEndDateWithStartDate:(id)a0;
+ (id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)a0 workoutEndDate:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)execute;
- (id)initWithHealthStore:(id)a0 workout:(id)a1 handler:(id /* block */)a2;
- (void)_setupQueries;
- (void)stop;
- (void)_heartRatesPostWorkout:(id)a0 workoutRecoveryTimePredicate:(id)a1 completionHandler:(id /* block */)a2;

@end
