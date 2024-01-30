@class ACHActivitySummaryUtility, ACHWorkoutUtility, HDProfile, HDDatabaseTransactionContext;

@interface ACHMonthlyChallengeDataSource : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (void).cxx_destruct;
- (double)valueForMonthlyChallengeType:(unsigned long long)a0 forDateComponentInterval:(id)a1 inCalendar:(id)a2;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)a0;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)a0;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)a0;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)a0;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)a0;
- (double)caloriesDuringDateComponentInterval:(id)a0;
- (double)moveTimeDuringDateComponentInterval:(id)a0;
- (double)exerciseMinutesDuringDateComponentInterval:(id)a0;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)a0;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)a0;
- (id)initWithProfile:(id)a0 activitySummaryUtility:(id)a1 workoutUtility:(id)a2;

@end
