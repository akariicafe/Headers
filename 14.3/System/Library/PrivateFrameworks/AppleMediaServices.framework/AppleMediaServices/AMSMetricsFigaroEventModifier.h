@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject

@property (readonly, nonatomic) NSDictionary *fieldFilters;
@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) NSDictionary *overrideDictionary;
@property (readonly, nonatomic) NSString *sampleSessionKey;
@property (readonly, nonatomic) double flushInterval;

- (id)reportingURLForEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)fieldFiltersMatchEvent:(id)a0;
- (id)_overridePropertyForKey:(id)a0;
- (BOOL)shouldDropEvent:(id)a0;
- (BOOL)shouldSkipEvent:(id)a0;
- (id)initWithMetricsDictionary:(id)a0 overrideDictionary:(id)a1;
- (id)_fieldFiltersFromOverrides:(id)a0;
- (id)_createSampleSessionKey;
- (id)prepareEvent:(id)a0;
- (BOOL)_shouldSampleEvent:(id)a0;

@end
