@class CALNInboxNotificationMonitor, UISApplicationState;

@interface CALNCalendarAppBadgeUpdater : NSObject

@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) UISApplicationState *applicationState;

- (void).cxx_destruct;
- (void)handleNotificationCountChangedNotification:(id)a0;
- (id)initWithInboxNotificationMonitor:(id)a0;

@end
