@interface AXDistributedNotificationHandler : VISAXNotificationHandler

+ (void)postDistributedNotificationWithName:(id)a0;

- (void)_stopObserving;
- (void)_startObserving;
- (id)_notificationTypeDescription;

@end
