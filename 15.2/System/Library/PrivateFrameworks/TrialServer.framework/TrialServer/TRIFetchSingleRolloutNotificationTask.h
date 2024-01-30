@class NSString, NSArray, NSDate, TRIRolloutDeployment, TRIRolloutTaskSupport;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchSingleRolloutNotificationTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    TRIRolloutDeployment *_deployment;
    id<TRITaskAttributing> _taskAttributing;
    TRIRolloutTaskSupport *_support;
}

@property (class, readonly) BOOL supportsSecureCoding;

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

+ (id)taskWithDeployment:(id)a0 taskAttributing:(id)a1;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (void)encodeWithCoder:(id)a0;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)serialize;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeployment:(id)a0 taskAttributing:(id)a1;
- (id)dimensions;
- (void)runDequeueHandlerUsingContext:(id)a0;

@end
