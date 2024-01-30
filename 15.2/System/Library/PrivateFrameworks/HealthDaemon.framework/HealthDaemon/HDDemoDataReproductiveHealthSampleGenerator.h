@class NSArray, HDProfile;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_basalBodyTempMultiplierTable;
    NSArray *_cervicalMucusTable;
    double _nextSexualActivitySampleTime;
    double _nextCycleDaySampleTime;
}

@property (retain, nonatomic) HDProfile *profile;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)a0 atTime:(double)a1;
- (id)_basalBodyTempMultiplier;

@end
