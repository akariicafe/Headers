@class NSObject;
@protocol OS_dispatch_queue;

@interface NRBypassQueue : NSObject {
    NSObject<OS_dispatch_queue> *_suspendableQueue;
    NSObject<OS_dispatch_queue> *_bypassQueue;
    BOOL _suspended;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void)enqueueBlock:(id /* block */)a0;
- (void)enqueueBlockAsync:(id /* block */)a0;
- (void)enqueueBypassBlock:(id /* block */)a0;
- (void)enqueueBypassBlockAsync:(id /* block */)a0;

@end
