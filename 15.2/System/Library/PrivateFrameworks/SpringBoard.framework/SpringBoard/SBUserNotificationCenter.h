@interface SBUserNotificationCenter : NSObject

+ (void)_userNotificationDone:(id)a0;
+ (void)startUserNotificationCenter;
+ (void)dispatchUserNotification:(id)a0 flags:(int)a1 replyPort:(unsigned int)a2 auditToken:(id)a3;

@end
