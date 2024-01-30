@class HMFTimer, NSString;

@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDWatchConnectivityLogEventManager *sharedInstance;

@property (nonatomic) BOOL hasCompleteReport;
@property (nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport;
@property (nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport;
@property (nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport;
@property (nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport;
@property (retain, nonatomic) HMFTimer *watchConnectivityLogEventManagerTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)completeCurrentReport;
- (struct HMDWatchConnectivityLogEventManagerSnapshot { BOOL x0; unsigned long long x1; unsigned long long x2; })currentWatchConnectivitySnapshot;
- (void)incrementWatchAddedNotificationCount;
- (void)incrementWatchRemovedNotificationCount;

@end
