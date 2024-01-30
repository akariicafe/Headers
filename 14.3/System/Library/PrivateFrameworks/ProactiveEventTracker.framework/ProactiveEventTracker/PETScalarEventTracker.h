@class NSString;

@interface PETScalarEventTracker : PETEventTracker

@property (readonly, nonatomic) NSString *event;

- (void)_logValue:(id)a0 forEvent:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
- (void).cxx_destruct;
- (void)trackEventWithPropertyValues:(id)a0;
- (void)trackEventWithPropertyValues:(id)a0 setValue:(unsigned long long)a1;
- (void)_setValue:(id)a0 forEvent:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
- (void)trackEventWithPropertyValues:(id)a0 value:(unsigned long long)a1;
- (id)initWithFeatureId:(id)a0 event:(id)a1 registerProperties:(id)a2;
- (id)initWithFeatureId:(id)a0 event:(id)a1 registerProperties:(id)a2 propertySubsets:(id)a3;

@end
