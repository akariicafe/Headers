@interface ACNotificationRebroadcaster : NSObject

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_accountStoreDidChange:(id)a0;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)dealloc;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (id)init;

@end
