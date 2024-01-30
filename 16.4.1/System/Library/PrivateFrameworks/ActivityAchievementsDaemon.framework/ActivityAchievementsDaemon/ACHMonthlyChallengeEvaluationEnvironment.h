@class ACHMonthlyChallengeDataSource, ACHDateComponentInterval, NSCalendar;

@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject

@property (weak, nonatomic) ACHMonthlyChallengeDataSource *dataSource;
@property (retain, nonatomic) ACHDateComponentInterval *dateComponentInterval;
@property (retain, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) double numberOfDaysClosingAllThreeRingsInCurrentMonth;
@property (readonly, nonatomic) double numberOfDaysClosingMoveRingInCurrentMonth;
@property (readonly, nonatomic) double numberOfDaysClosingExerciseRingInCurrentMonth;
@property (readonly, nonatomic) double numberOfDaysClosingStandRingInCurrentMonth;
@property (readonly, nonatomic) double totalEnergyBurnInCurrentMonth;
@property (readonly, nonatomic) double totalMoveTimeInCurrentMonth;
@property (readonly, nonatomic) double totalExerciseMinutesInCurrentMonth;
@property (readonly, nonatomic) double numberOfWorkoutsCompletedInCurrentMonth;
@property (readonly, nonatomic) double totalWalkingRunningDistanceInCurrentMonth;
@property (readonly, nonatomic) double numberOfDaysDoublingMoveGoalInCurrentMonth;
@property (readonly, nonatomic) double numberOfDaysDoublingExerciseGoalInCurrentMonth;
@property (readonly, nonatomic) double longestMoveStreakInCurrentMonth;
@property (readonly, nonatomic) double currentMoveStreakInCurrentMonth;

- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (double)_valueForMonthlyChallengeType:(unsigned long long)a0;
- (id)eligibleSpecificWorkoutChallengeType;
- (id)initWithMonthlyChallengeDataSource:(id)a0 dateComponentInterval:(id)a1 calendar:(id)a2;
- (id)numberOfCompletedWorkoutsInCurrentMonthForChallengeType:(id)a0;
- (id)numberOfDaysWithAppleMoveTimeOver:(id)a0;
- (id)numberOfDaysWithCaloriesBurnedOver:(id)a0;
- (id)numberOfDaysWithDistanceOver:(id)a0;
- (id)numberOfDaysWithExerciseMinutesOver:(id)a0;

@end
