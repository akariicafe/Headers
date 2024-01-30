@class NSMeasurement;

@interface GetAcitivitySummaryIntentResponse : INIntentResponse

@property (nonatomic, copy) NSMeasurement *activeEnergyBurned;
@property (nonatomic, copy) NSMeasurement *activeEnergyBurnedGoal;
@property (nonatomic) double appleMoveTime;
@property (nonatomic) double appleMoveTimeGoal;
@property (nonatomic) double appleExerciseTime;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) double appleStandHours;
@property (nonatomic) double appleStandHoursGoal;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
