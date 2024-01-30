@class NSArray, HKQuantity;

@interface HKWorkout : HKSample {
    unsigned long long _workoutActivityType;
    double _duration;
    NSArray *_workoutEvents;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalBasalEnergyBurned;
    HKQuantity *_totalDistance;
    HKQuantity *_totalElevation;
    HKQuantity *_totalSwimmingStrokeCount;
}

@property (nonatomic, getter=_goalType, setter=_setGoalType:) unsigned long long goalType;
@property (retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal;
@property (retain, nonatomic, getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:) HKQuantity *totalBasalEnergyBurned;
@property (nonatomic, getter=_isWatchWorkout, setter=_setIsWatchWorkout:) BOOL isWatchWorkout;
@property (readonly, nonatomic, getter=_activityMoveMode) long long activityMoveMode;
@property (readonly) unsigned long long workoutActivityType;
@property (readonly, copy) NSArray *workoutEvents;
@property (readonly) double duration;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalSwimmingStrokeCount;
@property (readonly) HKQuantity *totalFlightsClimbed;

+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 duration:(double)a4 totalActiveEnergyBurned:(id)a5 totalBasalEnergyBurned:(id)a6 totalDistance:(id)a7 totalSwimmingStrokeCount:(id)a8 totalFlightsClimbed:(id)a9 goalType:(unsigned long long)a10 goal:(id)a11 device:(id)a12 metadata:(id)a13 config:(id /* block */)a14;
+ (BOOL)supportsSecureCoding;
+ (id)_stringFromWorkoutActivityType:(unsigned long long)a0;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 duration:(double)a4 statistics:(id)a5 goalType:(unsigned long long)a6 goal:(id)a7 device:(id)a8 metadata:(id)a9;
+ (id)_workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 duration:(double)a4 totalActiveEnergyBurned:(id)a5 totalBasalEnergyBurned:(id)a6 totalDistance:(id)a7 goalType:(unsigned long long)a8 goal:(id)a9 device:(id)a10 metadata:(id)a11;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 device:(id)a6 metadata:(id)a7;
+ (id)_activityTypeMappings;
+ (id)_allWorkoutActivityTypes;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 duration:(double)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 device:(id)a6 metadata:(id)a7;
+ (id)_allWorkoutTypeNames;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 metadata:(id)a6;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 duration:(double)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 metadata:(id)a6;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 totalSwimmingStrokeCount:(id)a6 device:(id)a7 metadata:(id)a8;
+ (unsigned long long)_workoutActivityTypeFromString:(id)a0;
+ (id)workoutWithActivityType:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 workoutEvents:(id)a3 totalEnergyBurned:(id)a4 totalDistance:(id)a5 totalFlightsClimbed:(id)a6 device:(id)a7 metadata:(id)a8;
+ (BOOL)_isConcreteObjectClass;

- (void)_setDuration:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (void)_setWorkoutEvents:(id)a0;
- (id)_validateWorkoutEvents:(id)a0 withConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a1;
- (double)_goalInCanonicalUnit;
- (void)_setTotalEnergyBurned:(id)a0;
- (void)_setTotalDistance:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setWorkoutActivityType:(unsigned long long)a0;
- (void)_setTotalSwimmingStrokeCount:(id)a0;
- (void)_setTotalFlightsClimbed:(id)a0;
- (double)_totalEnergyBurnedInCanonicalUnit;
- (double)_totalBasalEnergyBurnedInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalSwimmingStrokeCountInCanonicalUnit;
- (double)_totalFlightsClimbedInCanonicalUnit;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)a0;
- (long long)hk_integerValue;
- (void)_enumerateActiveTimePeriods:(id /* block */)a0;

@end
