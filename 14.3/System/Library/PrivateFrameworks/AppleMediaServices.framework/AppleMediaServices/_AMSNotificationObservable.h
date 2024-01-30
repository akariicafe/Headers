@interface _AMSNotificationObservable : AMSObservable

- (BOOL)cancel;
- (BOOL)sendCompletion;
- (void)_receivedNotification:(id)a0;
- (id)initWithNotification:(id)a0 object:(id)a1;

@end
