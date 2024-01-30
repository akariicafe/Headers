@class NSMapTable, HMDMetricsManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLogEventDispatcher : HMFObject <HMMLogEventSubmitting>

@property (readonly, nonatomic) NSMapTable *logEventObserversByClass;
@property (weak) HMDMetricsManager *metricsManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (void)submitLogEvent:(id)a0;
- (void)submitLogEvent:(id)a0 error:(id)a1;
- (void)removeObserver:(id)a0 forEventClass:(Class)a1;
- (void)addObserver:(id)a0 forEventClasses:(id)a1;
- (void)addObserver:(id)a0 forEventClass:(Class)a1;

@end
