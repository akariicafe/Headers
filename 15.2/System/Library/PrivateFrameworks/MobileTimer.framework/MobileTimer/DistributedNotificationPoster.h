@interface DistributedNotificationPoster : NSObject

+ (void)postNotificationForUserPreferences:(BOOL)a0 localNotifications:(BOOL)a1;
+ (void)postNotificationForAlarmsEdited;
+ (void)postNotificationForAlarmActiveChanged;

@end
