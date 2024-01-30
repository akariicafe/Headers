@interface AXTelephonyNotificationHandler : VISAXNotificationHandler

- (void)_handleNotification:(id)a0;
- (void)_stopObserving;
- (void)_startObserving;
- (id)_notificationTypeDescription;

@end
