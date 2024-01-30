@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject

@property (readonly, nonatomic) CALNNotificationIconCache *notificationIconCache;

- (id)iconIdentifierFromUNNotificationIcon:(id)a0;
- (id)unNotificationIconFromIconIdentifier:(id)a0;
- (id)initWithNotificationIconCache:(id)a0;
- (void).cxx_destruct;

@end
