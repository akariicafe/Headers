@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue

- (void)_didAddNotification:(id)a0;
- (void)_didCancelNotifications;
- (void)_didProcessQueue;
- (void)_invokeEvent:(id)a0;

@end
