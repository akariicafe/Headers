@interface WebCookieObserverAdapter : NSObject {
    void *observer;
}

- (id)initWithObserver:(void *)a0;
- (void)cookiesChangedNotificationHandler:(id)a0;

@end
