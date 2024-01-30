@class HMFTimer, NSString, HMFUnfairLock;

@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate>

@property (class, readonly) HMDWatchConnectivityLogEventManager *sharedInstance;

@property (nonatomic) BOOL hasCompleteReport;
@property (nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport;
@property (nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport;
@property (nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport;
@property (nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport;
@property (retain, nonatomic) HMFTimer *watchConnectivityLogEventManagerTimer;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)incrementWatchAddedNotificationCount;
- (void)incrementWatchRemovedNotificationCount;
- (void)completeCurrentReport;
- (struct HMDWatchConnectivityLogEventManagerSnapshot { BOOL x0; unsigned long long x1; unsigned long long x2; })currentWatchConnectivitySnapshot;

@end
