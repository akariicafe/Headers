@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)_receivedMemoryNotification;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedLocalChangedNotification;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 taskContext:(const void *)a1;

@end
