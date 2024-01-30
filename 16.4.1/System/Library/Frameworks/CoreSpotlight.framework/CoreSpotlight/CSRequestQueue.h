@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRequestQueue : NSObject {
    _Atomic unsigned int _suspended;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_workSource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _workItemsLock;
    unsigned int _workItemsQoS;
    id /* block */ _startBlock;
    NSMutableArray *_workItems;
}

+ (id)_requestQueueAttribute;

- (void)enqueue:(id)a0;
- (void)validate;
- (void)suspend;
- (id)initWithLabel:(char *)a0 target:(id)a1 startBlock:(id /* block */)a2;
- (void)handleEvent;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (const char *)label;
- (void).cxx_destruct;
- (void)resume;

@end
