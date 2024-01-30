@class NSString, NSArray, TRIRolloutDeployment, NSDate, TRIRolloutTaskSupport;
@protocol TRITaskAttributing, TRITaskQueueStateProviding, TRIFactorPackSetId;

@interface TRIActivateTargetedRolloutDeploymentTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    id<TRITaskAttributing> _taskAttribution;
    TRIRolloutTaskSupport *_support;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
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

+ (id)taskWithDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2;
+ (id)parseFromData:(id)a0;

- (BOOL)_notifyUpdatedShadowEvaluationsWithDeployments:(id)a0 context:(id)a1 usingTransaction:(id)a2;
- (unsigned long long)requiredCapabilities;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)serialize;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dimensions;
- (void)runDequeueHandlerUsingContext:(id)a0;

@end
