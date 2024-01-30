@class NSArray;

@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_diurnalBPVariationTable;
    NSArray *_diurnalTempVariationTable;
    double _nextHeartRateSampleTime;
    double _nextRespirationRateSampleTime;
    double _lastRespirationRateGenerationTime;
    double _nextBloodPressureSampleTime;
    double _nextBodyTempSampleTime;
    double _nextOxygenSaturationSampleTime;
    double _nextPeripheralPerfusionIndexSampleTime;
    double _lastPeripheralPerfusionIndexValue;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_computeBodyTempInCelsiusForDemoPerson:(id)a0 atTime:(double)a1 addNoise:(BOOL)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
