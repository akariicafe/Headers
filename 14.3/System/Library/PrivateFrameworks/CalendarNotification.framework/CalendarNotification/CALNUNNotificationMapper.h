@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper;

- (void).cxx_destruct;
- (id)calnNotificationFromUNNotification:(id)a0;
- (id)calnNotificationsFromUNNotifications:(id)a0;
- (id)initWithNotificationRequestMapper:(id)a0;
- (id)_calnNotificationFromUNNotification:(id)a0;

@end
