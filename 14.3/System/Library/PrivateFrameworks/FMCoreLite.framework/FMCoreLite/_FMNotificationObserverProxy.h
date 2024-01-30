@class NSOperationQueue, NSString;

@interface _FMNotificationObserverProxy : _FMObserverProxy {
    id _notificationObserver;
}

@property (readonly, nonatomic) NSOperationQueue *observerQueue;
@property (readonly, copy, nonatomic) id /* block */ observerBlock;
@property (readonly, copy, nonatomic) NSString *notificationName;

- (void).cxx_destruct;
- (id)initWithWeakObserver:(id)a0 notificationName:(id)a1 observerQueue:(id)a2 observerBlock:(id /* block */)a3;
- (void)performObserverBlock;
- (void)invalidate;

@end
