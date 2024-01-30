@class CALNUNNotificationMapper;

@interface CALNUNNotificationResponseMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper;

+ (id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)a0;

- (id)calnNotificationResponseFromUNNotificationResponse:(id)a0;
- (id)initWithNotificationMapper:(id)a0;
- (void).cxx_destruct;

@end
