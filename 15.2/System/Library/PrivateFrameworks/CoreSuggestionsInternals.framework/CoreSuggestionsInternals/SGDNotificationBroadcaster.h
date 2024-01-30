@interface SGDNotificationBroadcaster : NSObject

+ (unsigned long long)notificationCount;
+ (void)emitContactDeleted:(id)a0;
+ (void)emitContactUpdated:(id)a0;
+ (void)emitEventDeleted:(id)a0;
+ (void)emitEventUpdated:(id)a0;
+ (void)emitReminderDeleted:(id)a0;
+ (void)emitReminderUpdated:(id)a0;
+ (void)emitURLChanged;

@end
