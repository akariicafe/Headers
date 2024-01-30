@interface HDDemoDataMobilitySampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextStepLengthSampleTime;
@property (nonatomic) double nextWalkingSpeedSampleTime;
@property (nonatomic) double nextAsymmetryPercentageSampleTime;
@property (nonatomic) double nextDoubleSupportPercentageSampleTime;
@property (nonatomic) double nextSixMinuteWalkTestDistanceSampleTime;
@property (nonatomic) double nextStairAscentSpeedSampleTime;
@property (nonatomic) double nextStairDescentSpeedSampleTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateStepLengthSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateWalkingSpeedSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateAsymmetryPercentageSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateDoubleSupportPercentageSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateSixMinuteWalkTestDistanceSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateStairAscentSpeedSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateStairDescentSpeedSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (BOOL)_isDemoPersonWalkingAboveAverage;
- (double)_generateWalkingDataSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 addFromWatch:(BOOL)a3 shouldDecreaseDuringRehab:(BOOL)a4 objectCollection:(id)a5 nextSampleTime:(double)a6 typeIdentifier:(id)a7 unit:(id)a8 sampleMean:(double)a9 sampleMeanStdDev:(double)a10 sampleFrequency:(double)a11 sampleFrequencyStdDev:(double)a12;

@end
