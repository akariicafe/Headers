@class NSString;

@interface PETDistributionEventTracker : PETEventTracker

@property (readonly, nonatomic) NSString *event;

- (id)initWithFeatureId:(id)a0 event:(id)a1 registerProperties:(id)a2;
- (void)trackEventWithPropertyValues:(id)a0 value:(double)a1;
- (void)_logValue:(id)a0 forEvent:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
- (id)initWithFeatureId:(id)a0 event:(id)a1 registerProperties:(id)a2 propertySubsets:(id)a3;
- (void).cxx_destruct;

@end
