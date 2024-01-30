@interface FABroadcaster : NSObject

+ (void)_broadcastNotificationName:(id)a0 userInfo:(id)a1;
+ (void)broadcastFamilyChangedNotification;
+ (void)broadcastServicesChangedNotification;
+ (void)broadcastRemoteUIWillDismissNotification:(id)a0;

@end
