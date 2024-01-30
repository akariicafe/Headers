@class TRITaskCapabilityModifier, NSString, NSArray, TRIRolloutDeployment, NSDate, TRIRolloutTaskSupport;
@protocol TRITaskAttributing, TRITaskQueueStateProviding, TRIFactorPackSetId;

@interface TRIActivateTargetedRolloutDeploymentTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    id<TRITaskAttributing> _taskAttribution;
    TRIRolloutTaskSupport *_support;
    TRITaskCapabilityModifier *_capabilityModifier;
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

+ (id)parseFromData:(id)a0;
+ (id)taskWithDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2 capabilityModifier:(id)a3;

- (unsigned long long)requiredCapabilities;
- (id)dimensions;
- (id)_asPersistedTask;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)initWithDeployment:(id)a0 factorPackSetId:(id)a1 taskAttribution:(id)a2 capabilityModifier:(id)a3;
- (id)metrics;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (BOOL)_notifyUpdatedShadowEvaluationsWithDeployments:(id)a0 context:(id)a1 usingTransaction:(id)a2;
- (void).cxx_destruct;

@end
