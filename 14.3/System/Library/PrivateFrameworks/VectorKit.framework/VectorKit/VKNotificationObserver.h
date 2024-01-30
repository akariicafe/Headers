@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    struct _geo_weak_ptr<id<VKNotificationObserverDelegate> > { id<VKNotificationObserverDelegate> _p; } _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)_receivedMemoryNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_receivedFlushTileCachesNotification;
- (id).cxx_construct;
- (id)initWithTarget:(id)a0 taskContext:(const struct TaskContext { id x0; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x1; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x2; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x3; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x4; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x5; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x6; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x7; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x8; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x9; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x10; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue *x0; } x0; } x11; } *)a1;
- (void)_receivedLocalChangedNotification;

@end
