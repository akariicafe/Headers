@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDispatchQueue : NSObject {
    unsigned long long _fifo;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) struct __CFBinaryHeap { } *heap;
@property (retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSuspended) BOOL suspended;

+ (id)serialQueueWithDispatchPriority:(long long)a0;
+ (id)concurrentQueueWithDispatchPriority:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addBlock:(id /* block */)a0 withQueuePriority:(long long)a1;
- (void)removeAllOutstandingBlocks;
- (id)_initWithDispatchAttr:(id)a0 dispatchPriority:(long long)a1;
- (void)addBlock:(id /* block */)a0 withQueuePriority:(long long)a1 forKey:(id)a2;
- (void)removeOutstandingBlockForKey:(id)a0;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)a0;
- (void)setQueuePriority:(long long)a0 ofOutstandingBlockForKey:(id)a1;
- (id)allKeysOfOutstandingBlocks;
- (BOOL)containsOutstandingBlockForKey:(id)a0;
- (void)addBlock:(id /* block */)a0;

@end
