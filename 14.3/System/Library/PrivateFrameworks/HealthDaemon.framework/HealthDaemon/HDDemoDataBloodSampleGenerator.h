@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextBloodAlcoholContentSampleTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)bloodAlcoholContentForDemoPerson:(id)a0 atTime:(double)a1;
- (double)_computeNumDrinksTodayForDemoPerson:(id)a0 atTime:(double)a1;

@end
