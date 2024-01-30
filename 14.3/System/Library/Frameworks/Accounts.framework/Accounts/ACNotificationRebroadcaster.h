@interface ACNotificationRebroadcaster : NSObject

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_beginObservingAccountStoreDidChangeNotifications;

@end
