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

- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)_postWatchUpdateNotification;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (void)pauseLaunchEventNotifications;
- (void)dealloc;
- (void)_postChangeHubNotification;
- (id)init;
- (void)unpauseLaunchEventNotifications;
- (void)_postWatchUpdateNotificationIfPending;
- (void)distributeChangeEvent:(id)a0 transaction:(id)a1;

@end
