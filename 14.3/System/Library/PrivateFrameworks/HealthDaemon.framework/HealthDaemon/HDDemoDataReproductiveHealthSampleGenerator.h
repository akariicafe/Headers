@class NSArray, HDProfile;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator

@property (copy, nonatomic) NSArray *basalBodyTempMultiplierTable;
@property (copy, nonatomic) NSArray *cervicalMucusTable;
@property (nonatomic) double nextSexualActivitySampleTime;
@property (nonatomic) double nextCycleDaySampleTime;
@property (retain, nonatomic) HDProfile *profile;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)generateWatchFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generatePhoneFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)completeOnboardingForDemoPerson:(id)a0;
- (struct HDDemoDataMenstrualFlow { long long x0; long long x1; })menstrualFlowForDemoPerson:(id)a0 withSampleDate:(id)a1;
- (id)_computeFirstRunCycleFactorSamplesForDemoPerson:(id)a0 targetDate:(id)a1;
- (void)addMenstruationSampleForDemoPersonFromWatch:(id)a0 date:(id)a1 flow:(struct HDDemoDataMenstrualFlow { long long x0; long long x1; })a2 objectCollection:(id)a3;
- (void)addSymptomSampleForDemoPersonFromWatch:(id)a0 date:(id)a1 categoryType:(id)a2 objectCollection:(id)a3;
- (id)sexualActivityForDemoPerson:(id)a0 atTime:(double)a1;
- (id)basalBodyTempForDemoPerson:(id)a0 atTime:(double)a1;
- (id)cervicalMucusQualityForDemoPerson:(id)a0 atTime:(double)a1;
- (id)ovulationTestResultForDemoPerson:(id)a0 withSampleDate:(id)a1;
- (id)menstrualCrampSymptomForDemoPerson:(id)a0 withSampleDate:(id)a1;
- (id)headacheSymptomForDemoPerson:(id)a0 withSampleDate:(id)a1;
- (BOOL)_isDemoPersonOvulating:(id)a0 atTime:(double)a1;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)a0 atTime:(double)a1;
- (id)_basalBodyTempMultiplier;

@end
