@class NSString, AMSMetricsDatabaseDataSource, AMSBagKeySet, NSDate, NSObject;
@protocol AMSMetricsFlushStrategy, AMSMetricsBagContract, AMSBagProtocol, OS_dispatch_queue;

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedTimerQueue;
@property (class, readonly, nonatomic) BOOL appAnalyticsAllowed;
@property (class, readonly, nonatomic) BOOL diagnosticsSubmissionAllowed;
@property (class, nonatomic) BOOL disableBackgroundMetrics;
@property (class, nonatomic) BOOL flushDelayEnabled;
@property (class, nonatomic) BOOL flushTimerEnabled;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) id<AMSMetricsFlushStrategy> currentFlushStrategy;
@property (retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource;
@property (nonatomic) long long destination;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engagementQueue;
@property (nonatomic) BOOL flushingDisabled;
@property (nonatomic) BOOL flushOnForeground;
@property (copy, nonatomic) id /* block */ flushIntervalBlock;
@property (retain, nonatomic) NSDate *flushIntervalStartTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue;
@property (retain, nonatomic) id<AMSMetricsBagContract> bagContract;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) long long eventCount;
@property (nonatomic) BOOL flushTimerEnabled;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)internalInstanceUsingBag:(id)a0;
+ (id)serverTimeFromTimeInterval:(double)a0;
+ (BOOL)recordAppAnalyticsForEvent:(id)a0 bugType:(id)a1;
+ (id)serverTimeFromDate:(id)a0;
+ (double)timeIntervalFromServerTime:(id)a0;

- (void)cancel;
- (void)enqueueEvent:(id)a0;
- (id)flushEvents:(id)a0;
- (void)_flushIntervalInvalidate;
- (void).cxx_destruct;
- (void)enqueueEvents:(id)a0;
- (void)dealloc;
- (void)_handleFlushIntervalWithStyle:(long long)a0;
- (id)enqueueAsyncEvents:(id)a0;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)a0;
- (id)flush;
- (double)_flushIntervalForEvents:(id)a0;
- (id)initWithContainerId:(id)a0 bagContract:(id)a1;
- (id)_flushDataSource:(id)a0 topic:(id)a1;
- (void)_applicationWillEnterForeground;
- (id)initWithContainerID:(id)a0 bag:(id)a1;
- (void)dropEvents;
- (id)_determineFlushStrategyWithDataSource:(id)a0 topic:(id)a1;
- (void)_beginFlushIntervalWithStyle:(long long)a0 events:(id)a1;
- (id)_enqueueFigaroEvents:(id)a0;
- (id)flushTopic:(id)a0;

@end
