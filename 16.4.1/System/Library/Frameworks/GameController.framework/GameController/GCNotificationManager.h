@class UNUserNotificationCenter;

@interface GCNotificationManager : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    BOOL _isPermissionGranted;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)requestNotification:(id)a0 withReply:(id /* block */)a1;
- (void)requestNotificationImpl:(id)a0 withReply:(id /* block */)a1;

@end
