@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (id)initWithTarget:(id)a0 taskContext:(const void *)a1;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedMemoryNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_receivedLocalChangedNotification;

@end
