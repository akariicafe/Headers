@interface HDDemoDataOtherAndAdditionalSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) double nextToothbrushingSampleTime;
@property (nonatomic) double nextHandwashingSampleTime;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)_dateComponentsByAddingHours:(long long)a0 toDate:(id)a1;
- (void)_generateToothbrushingSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (void)_generateHandwashingSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)_morningDateFromDate:(id)a0 calendar:(id)a1;
- (id)_eveningDateFromDate:(id)a0 calendar:(id)a1;
- (id)_generateToothbrushingSampleForDate:(id)a0 demoPerson:(id)a1 atTime:(double)a2;
- (id)_generateHandwashingSampleForDate:(id)a0 demoPerson:(id)a1 atTime:(double)a2;

@end
