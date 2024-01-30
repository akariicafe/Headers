@class NSDate, NSArray, HKQuantity;

@interface FIUIWorkoutStatistics : NSObject {
    NSArray *_workouts;
    long long _numberOfWalkRunWorkouts;
    long long _numberOfCyclingWorkouts;
    BOOL _isAllOutdoorCycling;
    BOOL _isAllRunning;
}

@property (readonly, nonatomic) double totalWorkoutDuration;
@property (readonly, nonatomic) double averageWorkoutDuration;
@property (readonly, nonatomic) HKQuantity *totalActiveEnergyBurn;
@property (readonly, nonatomic) HKQuantity *averageActiveEnergyBurn;
@property (readonly, nonatomic) HKQuantity *totalWalkRunDistance;
@property (readonly, nonatomic) HKQuantity *averageWalkRunDistance;
@property (readonly, nonatomic) double totalWalkRunDuration;
@property (readonly, nonatomic) HKQuantity *totalCyclingDistance;
@property (readonly, nonatomic) HKQuantity *averageCyclingDistance;
@property (readonly, nonatomic) double totalCyclingDuration;
@property (readonly, nonatomic) unsigned long long workoutCount;
@property (readonly, nonatomic) unsigned long long workoutsWithEnergyBurned;
@property (readonly, nonatomic) NSDate *startOfMonth;

+ (id)_monthFormatter;

- (id)init;
- (void).cxx_destruct;
- (void)_calculateStats;
- (void)_calculateAverages;
- (id)_formattedCyclingDistance:(id)a0 formattingManager:(id)a1;
- (id)_formattedDuration:(double)a0 formattingManager:(id)a1;
- (id)_formattedEnergyBurn:(id)a0 formattingManager:(id)a1;
- (id)_formattedWalkRunDistance:(id)a0 formattingManager:(id)a1;
- (id)formattedActiveEnergyBurnWithFormattingManager:(id)a0;
- (id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)a0;
- (id)formattedAverageCyclingDistanceWithFormattingManager:(id)a0;
- (id)formattedAverageWalkRunDistanceWithFormattingManager:(id)a0;
- (id)formattedAverageWorkoutDurationWithFormattingManager:(id)a0;
- (id)formattedCyclingDistanceWithFormattingManager:(id)a0;
- (id)formattedMonth;
- (id)formattedPaceWithFormattingManager:(id)a0;
- (id)formattedSpeedWithFormattingManager:(id)a0;
- (id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)a0;
- (id)formattedTotalCyclingDistanceWithFormattingManager:(id)a0;
- (id)formattedTotalWalkRunDistanceWithFormattingManager:(id)a0;
- (id)formattedTotalWorkoutDurationWithFormattingManager:(id)a0;
- (id)formattedWalkRunDistanceWithFormattingManager:(id)a0;
- (id)formattedWorkoutCount;
- (id)formattedWorkoutDurationWithFormattingManager:(id)a0;
- (id)initWithWorkouts:(id)a0;
- (id)simpleWorkoutCount;

@end
