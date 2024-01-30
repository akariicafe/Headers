@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)registerActivities;
- (void)_registerRetryFailuresActivity;
- (void)_registerFetchExperimentsActivity;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)_registerPostUpgradeActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_registerClientTriggeredActivities;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1;
- (void)_setDelay:(double)a0 forXPCActivity:(id)a1 withLabel:(id)a2;
- (void)_scheduleMaintenanceAndFetchTasksWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)postponeCellularActivity;

@end
