@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentQueue : CKVQueue {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)enqueue:(id)a0;
- (id)dequeue;
- (id)init;
- (void).cxx_destruct;

@end
