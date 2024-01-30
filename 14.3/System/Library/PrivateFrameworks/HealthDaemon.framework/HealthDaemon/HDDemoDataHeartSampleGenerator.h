@class HDProfile;

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator

@property (weak, nonatomic) HDProfile *profile;
@property (nonatomic) double nextElectrocardiogramSampleTime;
@property (nonatomic) unsigned long long nextElectrocardiogramClassification;
@property (nonatomic) double nextRestingHeartRateSampleTime;
@property (nonatomic) double nextWalkingHeartRateAverageSampleTime;
@property (nonatomic) double lastRestingHeartRate;
@property (nonatomic) double lastWalkingHeartRateAverage;
@property (nonatomic) double nextVO2MaxSampleTime;
@property (nonatomic) double lastVO2MaxValue;
@property (nonatomic) double meanVO2MaxValue;
@property (nonatomic) BOOL lastVO2MaxWorkoutWasActive;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)setProfile:(id)a0 provenance:(id)a1;
- (double)_meanVO2MaxValueForDemoPerson:(id)a0 date:(id)a1;
- (void)_completeCardioFitnessOnboardingIfNecessaryForDemoPerson:(id)a0 date:(id)a1;
- (id)restingHeartRateForDemoPerson:(id)a0 atTime:(double)a1;
- (id)walkingHeartRateAverageForDemoPerson:(id)a0 atTime:(double)a1;
- (id)electrocardiogramForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2;
- (id)_generateSymptomSamplesForElectrocardiogram:(id)a0;
- (id)vo2MaxValueForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2;
- (double)_computeRestingHeartRateForDemoPerson:(id)a0 atTime:(double)a1;
- (double)_computeWalkingHeartRateAverageForDemoPerson:(id)a0 atTime:(double)a1;
- (BOOL)_isVO2MaxWorkoutActive;
- (double)_computeVO2MaxValueForDemoPerson:(id)a0 atTime:(double)a1;
- (id)_generateElectrocardiogramForDemoPerson:(id)a0 atTime:(double)a1 classification:(unsigned long long)a2 sampleDate:(id)a3;

@end
