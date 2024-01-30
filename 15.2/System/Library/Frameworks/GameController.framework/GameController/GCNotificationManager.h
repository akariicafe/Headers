@class UNUserNotificationCenter;

@interface GCNotificationManager : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    BOOL _isPermissionGranted;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)requestNotification:(id)a0 withReply:(id /* block */)a1;
- (void)requestNotificationImpl:(id)a0 withReply:(id /* block */)a1;

@end
