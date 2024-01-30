@interface CDPBroadcaster : NSObject

+ (void)_broadcastNotificationName:(id)a0 userInfo:(id)a1;
+ (void)broadcastWalrusStateChangeNotification;
+ (void)broadcastWebAccessStateChangeNotification;

@end
