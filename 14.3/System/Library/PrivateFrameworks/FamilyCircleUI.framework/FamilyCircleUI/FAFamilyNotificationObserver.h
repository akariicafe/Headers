@interface FAFamilyNotificationObserver : NSObject {
    BOOL _observing;
    id /* block */ _notificationHandler;
}

+ (void)initialize;
+ (id)familyNotificationObserverWithNotificationHandler:(id /* block */)a0;

- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObserving;
- (id)_initWithNotificationHandler:(id /* block */)a0;
- (void)_didReceiveNotification;

@end
