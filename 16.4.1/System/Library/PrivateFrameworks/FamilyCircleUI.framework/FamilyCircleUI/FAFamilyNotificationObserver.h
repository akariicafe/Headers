@interface FAFamilyNotificationObserver : NSObject {
    BOOL _observing;
    id /* block */ _notificationHandler;
}

+ (void)initialize;
+ (id)familyNotificationObserverWithNotificationHandler:(id /* block */)a0;

- (void)stopObserving;
- (void)_didReceiveNotification;
- (void)_startObserving;
- (id)_initWithNotificationHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
