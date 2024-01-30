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

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithMonthlyChallengeDataSource:(id)a0 dateComponentInterval:(id)a1 calendar:(id)a2;
- (double)_valueForMonthlyChallengeType:(unsigned long long)a0;

@end
