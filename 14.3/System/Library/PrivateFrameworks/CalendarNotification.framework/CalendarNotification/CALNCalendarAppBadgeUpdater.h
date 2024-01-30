@class CALNInboxNotificationMonitor, UISApplicationState;

@interface CALNCalendarAppBadgeUpdater : NSObject

@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) UISApplicationState *applicationState;

- (void).cxx_destruct;
- (id)initWithInboxNotificationMonitor:(id)a0;
- (void)handleNotificationCountChangedNotification:(id)a0;

@end
