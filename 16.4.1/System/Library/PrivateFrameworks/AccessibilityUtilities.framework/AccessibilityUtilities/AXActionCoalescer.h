@class NSObject;
@protocol OS_dispatch_queue;

@interface AXActionCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_consistencyQueue;
    BOOL _coalescing;
}

+ (id)mainQueueCoalescerWithBlock:(id /* block */)a0;

- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)performCoalescedAsynchronously;

@end
