@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator {
    double _nextSleepDurationSampleTime;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (double)computeSleepTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (BOOL)isDemoPersonSleeping:(id)a0 atTime:(double)a1;
- (BOOL)isDemoPersonAwake:(id)a0 atTime:(double)a1;
- (double)computeAwakeTimeForDemoPerson:(id)a0 atTime:(double)a1;

@end
