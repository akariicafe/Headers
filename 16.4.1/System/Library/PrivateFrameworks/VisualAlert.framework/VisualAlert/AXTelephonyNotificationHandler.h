@interface AXTelephonyNotificationHandler : VISAXNotificationHandler

- (void)_handleNotification:(id)a0;
- (void)_startObserving;
- (void)_stopObserving;
- (id)_notificationTypeDescription;

@end
