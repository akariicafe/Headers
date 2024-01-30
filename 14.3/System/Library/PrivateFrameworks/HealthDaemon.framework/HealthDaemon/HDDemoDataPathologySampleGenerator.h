@class NSMutableDictionary;

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator

@property (retain, nonatomic) NSMutableDictionary *nextSpirometrySampleTimes;
@property (nonatomic) double nextAsthmaAttackSampleTime;
@property (nonatomic) double nextAsthmaAttackEndTime;
@property (nonatomic) BOOL forcePEFR;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)spirometryForDemoPerson:(id)a0 atTime:(double)a1 type:(long long)a2;
- (id)inhalerUsageForDemoPerson:(id)a0 atTime:(double)a1;
- (double)nextSpirometrySampleTimeFromType:(long long)a0;
- (void)setNextSpirometrySampleTime:(double)a0 forType:(long long)a1;
- (double)_computeSpirometryForDemoPerson:(id)a0 atTime:(double)a1 type:(long long)a2 computeLowerLimitOfNormality:(BOOL)a3 height:(double)a4;
- (BOOL)_isAsthmaAttackAllowedForDemoPerson:(id)a0 atTime:(double)a1;

@end
