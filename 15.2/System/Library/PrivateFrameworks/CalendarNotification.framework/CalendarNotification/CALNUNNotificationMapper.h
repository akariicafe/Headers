@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper;

- (id)initWithNotificationRequestMapper:(id)a0;
- (id)_calnNotificationFromUNNotification:(id)a0;
- (void).cxx_destruct;
- (id)calnNotificationsFromUNNotifications:(id)a0;
- (id)calnNotificationFromUNNotification:(id)a0;

@end
