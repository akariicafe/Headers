@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DVTQueueBasedTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _block;
    struct atomic<DVTQueueBasedTimerState> { struct __cxx_atomic_impl<DVTQueueBasedTimerState, std::__cxx_atomic_base_impl<DVTQueueBasedTimerState>> { _Atomic unsigned int __a_value; } __a_; } _state;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mlock;
}

@property (readonly) BOOL running;
@property (readonly) double interval;
@property (readonly) unsigned int state;

- (void)_runBlock;
- (id).cxx_construct;
- (void)pause;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithInterval:(double)a0 block:(id /* block */)a1;
- (id)initWithInterval:(double)a0 qos:(unsigned int)a1 block:(id /* block */)a2;

@end
