@interface IMEventNotificationBroadcaster : IMEventNotificationQueue

- (void)_willProcessQueue;
- (void)_didProcessQueue;
- (void)broadcastEventToListeners:(id /* block */)a0;

@end
