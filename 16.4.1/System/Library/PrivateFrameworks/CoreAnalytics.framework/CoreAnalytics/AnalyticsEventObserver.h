@class NSObject;
@protocol OS_dispatch_queue, AnalyticsEventObserverDelegate;

@interface AnalyticsEventObserver : NSObject {
    struct shared_ptr<(anonymous namespace)::EventObserverImpl> { struct EventObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } observer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<AnalyticsEventObserverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (BOOL)stopObserving;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEventObserverDelegate:(id)a0 queue:(id)a1;
- (BOOL)startObservingEventList:(id)a0;
- (BOOL)startObservingEventList:(id)a0 withErrorHandler:(id /* block */)a1;

@end
