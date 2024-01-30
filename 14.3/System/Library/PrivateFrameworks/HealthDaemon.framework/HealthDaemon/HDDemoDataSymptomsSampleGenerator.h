@interface HDDemoDataSymptomsSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextCommonColdSymptomsTime;
@property (nonatomic) double nextFoodPoisoningSymptomsTime;
@property (nonatomic) double nextSingleRandomSymptomTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)generateSingleSymptomSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)generateSymptomSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 nextTime:(double)a3 condition:(long long)a4 sampleTypes:(id)a5 frequency:(double)a6 objectCollection:(id)a7;

@end
