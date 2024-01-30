@class HKQuantity, NSArray, NSDate;

@interface FIUIActivityDataModel : NSObject <NSCopying>

@property (nonatomic) BOOL databaseLoading;
@property (nonatomic) BOOL areFitnessAppsRestricted;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) HKQuantity *activeEnergyTotal;
@property (retain, nonatomic) HKQuantity *activeEnergyGoal;
@property (nonatomic) double appleMoveTimeTotal;
@property (nonatomic) double appleMoveTimeGoal;
@property (nonatomic) double appleExerciseTimeTotal;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) BOOL wheelchairUser;
@property (nonatomic) long long appleStandHoursTotal;
@property (nonatomic) long long appleStandHoursGoal;
@property (copy, nonatomic) NSArray *activeEnergyChartData;
@property (copy, nonatomic) NSArray *appleMoveTimeChartData;
@property (copy, nonatomic) NSArray *appleExerciseTimeChartData;
@property (copy, nonatomic) NSArray *appleStandHourChartData;
@property (readonly, nonatomic) BOOL userHasDoneActivitySetup;
@property (readonly, nonatomic) BOOL deviceLocked;

+ (id)lockedModel;
+ (id)idealizedModel;
+ (id)formattingManager;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)activeEnergyCompletionPercentage;
- (id)debugDescription;
- (id)loggingString;
- (double)appleMoveTimeCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)appleStandHourCompletionPercentage;

@end
