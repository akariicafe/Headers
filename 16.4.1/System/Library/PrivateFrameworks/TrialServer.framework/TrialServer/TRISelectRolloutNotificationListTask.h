@class NSSet, NSString, NSArray, NSDate, NSMutableArray, _PASLock;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRISelectRolloutNotificationListTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSMutableArray *_nextTasks;
    id<TRITaskAttributing> _taskAttribution;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *namespaceNames;
@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromData:(id)a0;
+ (id)taskWithNamespaceNames:(id)a0 taskAttribution:(id)a1;

- (unsigned long long)requiredCapabilities;
- (id)dimensions;
- (id)_asPersistedTask;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNamespaceNames:(id)a0 taskAttribution:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_addNextTask:(id)a0;
- (id)metrics;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (BOOL)isEqual:(id)a0;
- (struct { unsigned char x0; })_processRolloutArtifact:(id)a0 rolloutsProcessed:(id)a1 remainingNamespaces:(id)a2 targeter:(id)a3 context:(id)a4 taskQueue:(id)a5;
- (void)_addMetric:(id)a0;
- (void)_addDimension:(id)a0;
- (id)serialize;
- (long long)nextTaskCount;
- (void).cxx_destruct;

@end
