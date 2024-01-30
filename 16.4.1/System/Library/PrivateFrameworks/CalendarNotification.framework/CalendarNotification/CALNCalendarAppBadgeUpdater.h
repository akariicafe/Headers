@class CALNInboxNotificationMonitor, UISApplicationState;

@interface CALNCalendarAppBadgeUpdater : NSObject

@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) UISApplicationState *applicationState;

- (void)handleNotificationsChangedNotification:(id)a0;
- (id)initWithInboxNotificationMonitor:(id)a0;
- (void).cxx_destruct;

@end
