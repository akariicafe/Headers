@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIMaintenanceTask : TRIBaseTask <TRITask>

@property (class, readonly) BOOL supportsSecureCoding;

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

+ (id)task;
+ (id)parseFromData:(id)a0;

- (id)serialize;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (BOOL)_cleanupExperimentWithDeployment:(id)a0 paths:(id)a1;
- (BOOL)_cleanupTreatmentWithTreatmentId:(id)a0 paths:(id)a1;
- (void)_handleExpiredExperimentsWithExperimentDatabase:(id)a0 nextTasks:(id)a1;
- (void)_handleOrphanedNamespacesWithNamespaceDatabase:(id)a0 nextTasks:(id)a1;
- (BOOL)_cleanupUnusedContentWithContext:(id)a0;

@end
