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
@property (nonatomic) BOOL wasDeferred;
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

+ (id)taskWithNamespaceNames:(id)a0 taskAttribution:(id)a1;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (struct { unsigned char x0; })_processRolloutArtifact:(id)a0 rolloutsProcessed:(id)a1 remainingNamespaces:(id)a2 targeter:(id)a3 context:(id)a4 taskQueue:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)serialize;
- (id)initWithNamespaceNames:(id)a0 taskAttribution:(id)a1;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addMetric:(id)a0;
- (id)dimensions;
- (void)_addDimension:(id)a0;
- (void)_addNextTask:(id)a0;
- (long long)nextTaskCount;

@end
