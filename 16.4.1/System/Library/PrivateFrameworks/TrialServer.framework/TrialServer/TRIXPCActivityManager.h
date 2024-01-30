@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void)_registerFetchExperimentsActivity;
- (void)_registerRetryFailuresActivity;
- (void)_registerPostUpgradeActivity;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)registerSetupAssistantFetchActivity;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;
- (void)registerActivities;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)postponeCellularActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_scheduleFetchTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_registerHotfixTargetingActivity;
- (void)_registerClientTriggeredActivities;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;
- (id)initWithDispatchQueue:(id)a0;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_registerMaintenanceWorkActivity;
- (void).cxx_destruct;

@end
