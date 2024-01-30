@class NSArray, NSDictionary, AMSMetricsFigaroEventModifier, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMetricsFigaroBagConfguration : NSObject

@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) NSArray *overrides;
@property (readonly, nonatomic) AMSMetricsFigaroEventModifier *defaultModifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)configurationWithBag:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)_generateModifiersIfNeeded;
- (id)modifierForEvent:(id)a0;
- (id)initWithMetricsDictionary:(id)a0;
- (void)prepareForFlush;

@end
