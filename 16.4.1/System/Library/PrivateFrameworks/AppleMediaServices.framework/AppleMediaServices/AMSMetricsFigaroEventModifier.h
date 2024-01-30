@class NSDictionary, NSString;

@interface AMSMetricsFigaroEventModifier : NSObject

@property (readonly, nonatomic) NSDictionary *fieldFilters;
@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) NSDictionary *overrideDictionary;
@property (readonly, nonatomic) NSString *sampleSessionKey;
@property (readonly, nonatomic) double flushInterval;

- (id)initWithMetricsDictionary:(id)a0 overrideDictionary:(id)a1;
- (BOOL)_shouldSampleEvent:(id)a0;
- (BOOL)shouldDropEvent:(id)a0;
- (id)_createSampleSessionKey;
- (id)_overridePropertyForKey:(id)a0;
- (id)_encodedExperimentDataForTopic:(id)a0;
- (BOOL)fieldFiltersMatchEvent:(id)a0;
- (id)_fieldFiltersFromOverrides:(id)a0;
- (id)reportingURLForEvent:(id)a0;
- (BOOL)shouldSkipEvent:(id)a0;
- (id)preparedEventPromiseWithEvent:(id)a0;
- (void).cxx_destruct;

@end
