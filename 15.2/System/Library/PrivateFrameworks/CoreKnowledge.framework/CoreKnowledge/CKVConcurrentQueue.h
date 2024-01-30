@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentQueue : CKVQueue {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)dequeue;
- (void).cxx_destruct;
- (id)init;
- (void)enqueue:(id)a0;

@end
