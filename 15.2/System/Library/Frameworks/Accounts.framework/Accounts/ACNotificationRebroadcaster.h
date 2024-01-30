@interface ACNotificationRebroadcaster : NSObject

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)dealloc;
- (void)_endObservingAccountStoreDidChangeNotifications;

@end
