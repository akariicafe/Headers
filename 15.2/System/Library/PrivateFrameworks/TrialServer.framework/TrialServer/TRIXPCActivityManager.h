@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void)postponeCellularActivity;
- (void)registerSetupAssistantFetchActivity;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (id)initWithDispatchQueue:(id)a0;
- (void)_registerRetryFailuresActivity;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;
- (void)registerRecurrentRollbackActivityWithDelay:(double)a0;
- (void)_registerPostUpgradeActivity;
- (void)_scheduleMaintenanceAndFetchTasksWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_registerPlaceholderTaskQueueActivity;
- (void).cxx_destruct;
- (void)_registerFetchExperimentsActivity;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)_registerClientTriggeredActivities;
- (void)_registerHotfixTargetingActivity;
- (void)registerActivities;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;

@end
