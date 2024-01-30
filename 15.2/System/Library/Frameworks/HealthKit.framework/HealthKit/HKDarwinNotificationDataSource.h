@interface HKDarwinNotificationDataSource : HKObserverBridge

- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;

@end
