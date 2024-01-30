@class NSOperationQueue, NSString;

@interface _NANotificationObserverProxy : _NAObserverProxy {
    id _notificationObserver;
}

@property (readonly, nonatomic) NSOperationQueue *observerQueue;
@property (readonly, copy, nonatomic) id /* block */ observerBlock;
@property (readonly, copy, nonatomic) NSString *notificationName;

- (void).cxx_destruct;
- (void)performObserverBlock;
- (void)invalidate;
- (id)initWithWeakObserver:(id)a0 notificationName:(id)a1 observerQueue:(id)a2 observerBlock:(id /* block */)a3;

@end
