@interface AXDistributedNotificationHandler : VISAXNotificationHandler

+ (void)postDistributedNotificationWithName:(id)a0;

- (void)_startObserving;
- (void)_stopObserving;
- (id)_notificationTypeDescription;

@end
