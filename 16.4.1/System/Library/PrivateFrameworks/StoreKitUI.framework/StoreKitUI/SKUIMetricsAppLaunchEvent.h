@class NSString, NSMutableDictionary;

@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent <SKUIInspectableObject>

@property (class, readonly, nonatomic) double processStartTime;

@property (retain, nonatomic) NSString *launchCorrelationKey;
@property (nonatomic) double mainTime;
@property (nonatomic) double clientConfigurationLoadTime;
@property (readonly, copy, nonatomic) NSMutableDictionary *templateMetrics;
@property (nonatomic) double bootstrapStartTime;
@property (nonatomic) double bootstrapEndTime;
@property (nonatomic) double jsResourcesStartTime;
@property (nonatomic) double jsResourcesEndTime;
@property (nonatomic) double initialTabRequestStartTime;
@property (nonatomic) double initialTabResponseStartTime;
@property (nonatomic) double initialTabResponseEndTime;
@property (nonatomic) double launchFailureTime;
@property (nonatomic) double launchEndTime;
@property (nonatomic) BOOL requiredBlockingBagLoad;
@property (nonatomic) BOOL usedBootstrapFallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)consumePendingLaunchEvent;
+ (void)createPendingLaunchEvent;
+ (void)resetPendingLaunchEventForTesting;
+ (void)withPendingLaunchEvent:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)appendPropertiesToBody:(id)a0;
- (void)addTemplateLoadTimingMetric:(id)a0 forURL:(id)a1;
- (void)populateObjectInspector:(id)a0;

@end
