@class NSArray, CALNInboxNotificationMonitor, NSObject;
@protocol CALNNotificationSource, OS_dispatch_queue, CALNNotificationManager;

@interface CALNNotificationSourceRefresher : NSObject {
    BOOL _needsRefreshOnNotificationsLoaded;
    NSObject<OS_dispatch_queue> *_refreshQueue;
}

@property (readonly, copy, nonatomic) NSArray<CALNNotificationSource> *sources;
@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) id<CALNNotificationManager> notificationManager;

- (void).cxx_destruct;
- (void)handleNotificationsLoadedNotification;
- (void)refreshNotifications;
- (void)_refreshNotifications:(id)a0;
- (id)initWithSources:(id)a0 notificationMonitor:(id)a1 notificationManager:(id)a2;
- (void)handleNotificationsChangedNotification:(id)a0;
- (void)_withdrawExpiredNotificationsForSource:(id)a0;

@end
