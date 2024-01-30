@class _HDDemoDataActivityWorkoutState, HDDemoDataGeneratorWorkoutConfiguration, HDDataOriginProvenance, HKActivityCache;

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator {
    HDDataOriginProvenance *_provenance;
    double _nextActiveCaloriesSampleTime;
    double _nextAppleStandHourSampleTime;
    double _nextRestingCaloriesSampleTime;
    double _nextFallSampleTime;
    double _nextFlightsClimbedSampleTime;
    double _nextStepsSampleTime;
    double _nextExerciseMinuteTime;
    double _nextHeartRateRecoveryStartTime;
    double _nextHeartRateRecoveryStopTime;
    double _nextRunningPowerSampleTime;
    double _nextRunningStrideLengthSampleTime;
    double _nextRunningVerticalOscillationSampleTime;
    double _nextRunningGroundContactTimeSampleTime;
    double _nextUVIndexSampleTime;
    double _lastUVIndexPeakTime;
    double _lastUVExposure;
    double _lastUVIndexPeak;
    HKActivityCache *_lastActivityCache;
    HDDemoDataGeneratorWorkoutConfiguration *_currentWorkoutConfiguration;
    _HDDemoDataActivityWorkoutState *_workoutState;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_computeExerciseTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (id)_computeFlightsClimbedForDemoPerson:(id)a0 atTime:(double)a1;
- (double)_computePercentCooledForDemoPerson:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonCoolingDown:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonInWorkoutRecovery:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonSedentary:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonWalking:(id)a0 atTime:(double)a1 samplePeriod:(double)a2;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setProfile:(id)a0 provenance:(id)a1;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
