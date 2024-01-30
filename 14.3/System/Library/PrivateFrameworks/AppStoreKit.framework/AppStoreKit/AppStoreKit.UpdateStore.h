@interface AppStoreKit.UpdateStore : ASDSoftwareUpdatesStore {
    void /* unknown type, empty encoding */ notificationQueue;
    void /* unknown type, empty encoding */ coalesceUpdateNotifications;
    void /* unknown type, empty encoding */ notificationWorkItem;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)broadcastChangeNotificationIfNotCoalescing;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;

@end
