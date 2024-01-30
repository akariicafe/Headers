@interface ATThreadSafeHeadTracker : NSObject {
    struct shared_ptr<ThreadSafeHeadTracker> { struct ThreadSafeHeadTracker *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRateLimit:(float)a0 detectPredictionAnchor:(BOOL)a1 userContext:(void *)a2 factory:(void /* function */ *)a3 execution:(void /* function */ *)a4 finalizer:(void /* function */ *)a5;

@end
