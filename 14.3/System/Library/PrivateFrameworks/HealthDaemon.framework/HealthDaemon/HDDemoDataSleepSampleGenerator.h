@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextSleepDurationSampleTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (double)computeSleepTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (BOOL)isDemoPersonSleeping:(id)a0 atTime:(double)a1;
- (BOOL)isDemoPersonAwake:(id)a0 atTime:(double)a1;
- (void)_generateHeartRateDataForSleepSamples:(id)a0 objectCollection:(id)a1 demoPerson:(id)a2;
- (double)computeAwakeTimeForDemoPerson:(id)a0 atTime:(double)a1;

@end
