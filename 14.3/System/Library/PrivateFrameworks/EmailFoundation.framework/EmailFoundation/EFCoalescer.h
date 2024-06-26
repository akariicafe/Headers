@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EFCoalescer : NSObject {
    id /* block */ _coalescerAction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _coalescedValue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleCoalesceEvent;
- (id)initWithCoalescingAction:(id /* block */)a0;
- (void)coalesceValue:(id)a0;

@end
