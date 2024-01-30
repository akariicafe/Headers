@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper;
@property (readonly, nonatomic) CALNUNNotificationIconMapper *notificationIconMapper;

- (id)unNotificationRequestFromCALNNotificationRequest:(id)a0;
- (id)initWithNotificationContentMapper:(id)a0 notificationIconMapper:(id)a1;
- (void).cxx_destruct;
- (id)calnNotificationRequestFromUNNotificationRequest:(id)a0;

@end
