@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextMindfulSessionSampleTime;
@property (nonatomic) BOOL didGenerateMindfulnessMinute;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)_mindfulSessionSampleForDemoPerson:(id)a0 atTime:(double)a1 startDate:(id)a2;
- (id)_heartRatesFromMindfulSessionSample:(id)a0 demoPerson:(id)a1 atTime:(double)a2;

@end
