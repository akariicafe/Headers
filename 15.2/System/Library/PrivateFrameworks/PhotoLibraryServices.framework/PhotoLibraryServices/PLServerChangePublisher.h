@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher> {
    _Atomic long long _postCount;
    _Atomic BOOL _hasPendingWatchNotification;
    _Atomic BOOL _suppressWatchNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (void)_postChangeHubNotification;
- (void)distributeChangeEvent:(id)a0 transaction:(id)a1;
- (id)init;
- (void)_postWatchUpdateNotificationIfPending;
- (void)dealloc;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postWatchUpdateNotification;

@end
