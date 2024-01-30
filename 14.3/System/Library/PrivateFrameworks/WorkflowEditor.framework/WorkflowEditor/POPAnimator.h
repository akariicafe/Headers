@class NSMutableArray, CADisplayLink;
@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject {
    CADisplayLink *_displayLink;
    struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__prev_; struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__next_; } __end_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > { unsigned long long __value_; } __size_alloc_; } _list;
    struct __CFDictionary { } *_dict;
    NSMutableArray *_observers;
    struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__prev_; struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *__next_; } __end_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > { unsigned long long __value_; } __size_alloc_; } _pendingList;
    struct __CFRunLoopObserver { } *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL disableDisplayLink;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id<POPAnimatorDelegate> delegate;
@property (readonly, nonatomic) double refreshPeriod;

+ (id)sharedAnimator;

- (void)render;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)observers;
- (id).cxx_construct;
- (double)_currentRenderTime;
- (void)addAnimation:(id)a0 forObject:(id)a1 key:(id)a2;
- (void)removeAllAnimationsForObject:(id)a0;
- (void)removeAnimationForObject:(id)a0 key:(id)a1;
- (id)animationKeysForObject:(id)a0;
- (id)animationForObject:(id)a0 key:(id)a1;
- (void)_clearPendingListObserver;
- (void)_renderTime:(double)a0 items:(struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> { struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *x0; struct __list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > { unsigned long long x0; } x1; })a1;
- (void)_processPendingList;
- (void)_renderTime:(double)a0 item:(struct shared_ptr<POPAnimatorItem> { struct POPAnimatorItem *x0; struct __shared_weak_count *x1; })a1;
- (void)removeAnimationForObject:(id)a0 key:(id)a1 cleanupDict:(BOOL)a2;
- (void)_scheduleProcessPendingList;
- (void)renderTime:(double)a0;

@end
