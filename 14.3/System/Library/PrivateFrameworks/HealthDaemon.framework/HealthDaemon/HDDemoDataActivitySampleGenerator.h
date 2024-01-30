@class _HDDemoDataActivityWorkoutState, HDProfile, HDDemoDataGeneratorWorkoutConfiguration, HDDataOriginProvenance, HKActivityCache;

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataOriginProvenance *provenance;
@property (nonatomic) double nextActiveCaloriesSampleTime;
@property (nonatomic) double nextAppleStandHourSampleTime;
@property (nonatomic) double nextRestingCaloriesSampleTime;
@property (nonatomic) double nextFallSampleTime;
@property (nonatomic) double nextFlightsClimbedSampleTime;
@property (nonatomic) double nextStepsSampleTime;
@property (nonatomic) double nextExerciseMinuteTime;
@property (nonatomic) double nextHeartRateRecoveryStartTime;
@property (nonatomic) double nextHeartRateRecoveryStopTime;
@property (nonatomic) double nextUVIndexSampleTime;
@property (nonatomic) double lastUVIndexPeakTime;
@property (nonatomic) double lastUVExposure;
@property (nonatomic) double lastUVIndexPeak;
@property (retain, nonatomic) HKActivityCache *lastActivityCache;
@property (retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *currentWorkoutConfiguration;
@property (retain, nonatomic) _HDDemoDataActivityWorkoutState *workoutState;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (double)_computeExerciseTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (BOOL)_isDemoPersonWalking:(id)a0 atTime:(double)a1 samplePeriod:(double)a2;
- (id)_computeFlightsClimbedForDemoPerson:(id)a0 atTime:(double)a1;
- (id)activeCaloriesForDemoPerson:(id)a0 atTime:(double)a1;
- (id)exerciseMinutesForDemoPerson:(id)a0 atTime:(double)a1;
- (id)appleStandHourForDemoPerson:(id)a0 atTime:(double)a1 activeCalories:(id)a2 exerciseMinutes:(id)a3;
- (id)restingCaloriesForDemoPerson:(id)a0 atTime:(double)a1;
- (id)fallsForDemoPerson:(id)a0 atTime:(double)a1;
- (id)flightsClimbedForDemoPerson:(id)a0 atTime:(double)a1;
- (id)stepsForDemoPerson:(id)a0 atTime:(double)a1;
- (id)_computeWalkingRunningDistanceWithStepCount:(id)a0 demoPerson:(id)a1;
- (id)_computeCyclingDistanceWithStepCount:(id)a0 demoPerson:(id)a1;
- (id)uvIndexForDemoPerson:(id)a0 atTime:(double)a1;
- (id)_sumQuantity:(id)a0 withQuantity:(id)a1;
- (void)_updateWorkoutStateWithActiveEnergyBurned:(id)a0 distanceWalking:(id)a1 distanceCycling:(id)a2 currentTime:(double)a3 date:(id)a4 objectCollection:(id)a5 demoPerson:(id)a6;
- (void)_generateHIITWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateSwimmingWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateEllipticalWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateRunningWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1 workoutState:(id)a2;
- (void)_generateWalkingWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateYogaWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateHikingWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateDanceWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateCooldownWorkoutDataWithObjectCollection:(id)a0 demoPerson:(id)a1;
- (void)_generateWorkoutDataWithHeartRates:(id)a0 recoveryHeartRates:(id)a1 objectCollection:(id)a2 demoPerson:(id)a3 workoutState:(id)a4;
- (void)_generateSwimmingSegmentDataWithStartDate:(id)a0 segmentTime:(double)a1 segmentDistance:(double)a2 numLaps:(long long)a3 strokeStyle:(long long)a4 objectCollection:(id)a5 demoPerson:(id)a6;
- (id)_computeSwimmingStrokesFromDistance:(id)a0 demoPerson:(id)a1;
- (double)_computeUVIndexForDemoPerson:(id)a0 atTime:(double)a1;
- (void)setProfile:(id)a0 provenance:(id)a1;
- (long long)_pickActivityForTime:(double)a0;
- (double)_computeExerciseCaloriesForDemoPerson:(id)a0 duration:(double)a1 activity:(long long)a2 weight:(double)a3;
- (double)_computePercentCooledForDemoPerson:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonCoolingDown:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonSedentary:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonInWorkoutRecovery:(id)a0 atTime:(double)a1;

@end
