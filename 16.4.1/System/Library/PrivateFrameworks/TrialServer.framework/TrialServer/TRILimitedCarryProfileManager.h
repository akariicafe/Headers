@class NSString, NSDictionary, _PASSimpleCoalescingTimer, TRIServerContext, NSObject;
@protocol TRITaskQueuing, OS_dispatch_queue, OS_os_transaction;

@interface TRILimitedCarryProfileManager : NSObject <MCProfileConnectionObserver> {
    id<TRITaskQueuing> _taskQueue;
    TRIServerContext *_context;
    NSObject<OS_dispatch_queue> *_profileProcessingQueue;
    _PASSimpleCoalescingTimer *_checkForUpdates;
    NSObject<OS_os_transaction> *_txn;
}

@property (retain, nonatomic) NSDictionary *lcExperiments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_limitedCarryExperiments;
- (void)removeProfileForExperiment:(id)a0;
- (void)processLaunchEvent;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;
- (void)_gatherProfileUpdatesAndScheduleRelatedTasks;
- (struct { unsigned char x0; })_enqueueTask:(id)a0;
- (id)initWithTaskQueue:(id)a0 context:(id)a1;
- (BOOL)_setStoredLimitedCarryExperimentsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_getStoredLimitedCarryExperimentsWithError:(id *)a0;

@end
