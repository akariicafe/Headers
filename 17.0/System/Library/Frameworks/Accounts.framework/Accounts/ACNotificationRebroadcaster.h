@interface ACNotificationRebroadcaster : NSObject

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)_endObservingAccountStoreDidChangeNotifications;

@end
