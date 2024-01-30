@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper;

- (id)calnNotificationFromUNNotification:(id)a0;
- (id)_calnNotificationFromUNNotification:(id)a0;
- (id)initWithNotificationRequestMapper:(id)a0;
- (id)calnNotificationsFromUNNotifications:(id)a0;
- (void).cxx_destruct;

@end
