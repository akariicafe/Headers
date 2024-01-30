@class NSArray;

@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator

@property (copy, nonatomic) NSArray *diurnalBPVariationTable;
@property (copy, nonatomic) NSArray *diurnalTempVariationTable;
@property (nonatomic) double nextHeartRateSampleTime;
@property (nonatomic) double nextRespirationRateSampleTime;
@property (nonatomic) double nextBloodPressureSampleTime;
@property (nonatomic) double nextBodyTempSampleTime;
@property (nonatomic) double nextOxygenSaturationSampleTime;
@property (nonatomic) double nextPeripheralPerfusionIndexSampleTime;
@property (nonatomic) double lastPeripheralPerfusionIndexValue;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (double)_computeBodyTempInCelsiusForDemoPerson:(id)a0 atTime:(double)a1 addNoise:(BOOL)a2;
- (struct HDDemoDataHeartRate { double x0; long long x1; })heartRateForDemoPerson:(id)a0 atTime:(double)a1;
- (struct HDDemoDataBloodPressure { double x0; double x1; })bloodPressureForDemoPerson:(id)a0 atTime:(double)a1;
- (id)respirationRateForDemoPerson:(id)a0 atTime:(double)a1;
- (id)bodyTempInCelsiusForDemoPerson:(id)a0 atTime:(double)a1;
- (id)oxygenSaturationForDemoPerson:(id)a0 atTime:(double)a1 currentDate:(id)a2;
- (id)averageHeartRateForOxygenSaturation:(id)a0 atTime:(double)a1;
- (id)peripheralPerfusionIndexForDemoPerson:(id)a0 atTime:(double)a1;
- (struct HDDemoDataHeartRate { double x0; long long x1; })_computeHeartRateForDemoPerson:(id)a0 atTime:(double)a1;
- (long long)_computeRespirationRateForDemoPerson:(id)a0 atTime:(double)a1;
- (long long)_computeBloodPressureForDemoPerson:(id)a0 atTime:(double)a1 baseBloodPressure:(double)a2 stdDev:(double)a3;
- (long long)_computeMaxHRForDemoPerson:(id)a0 atTime:(double)a1;

@end
