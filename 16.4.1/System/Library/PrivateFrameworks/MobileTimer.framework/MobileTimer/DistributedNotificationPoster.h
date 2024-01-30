@interface DistributedNotificationPoster : NSObject

+ (void)postNotificationForAlarmsEdited;
+ (void)postNotificationForAlarmActiveChanged;
+ (void)postNotificationForUserPreferences:(BOOL)a0 localNotifications:(BOOL)a1;

@end
