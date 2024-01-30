@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue

- (void)_invokeEvent:(id)a0;
- (void)_didProcessQueue;
- (void)_didAddNotification:(id)a0;
- (void)_didCancelNotifications;

@end
