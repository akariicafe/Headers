@class NAQueue;
@protocol HFMutablePriorityQueueObserver;

@interface HFMutablePriorityQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NAQueue *queue;
@property (weak, nonatomic) id<HFMutablePriorityQueueObserver> observer;
@property (readonly) unsigned long long count;

+ (id /* block */)_comparator;

- (id)dequeue;
- (id)drain;
- (void).cxx_destruct;
- (id)init;
- (id)peek;
- (id)enqueue:(id)a0;
- (void)_operateOnMatchingObjects:(id)a0 removingMatched:(BOOL)a1 lockedOperationBlock:(id /* block */)a2;
- (void)prioritizeObjects:(id)a0 increment:(long long)a1;
- (void)_prioritizeObjects:(id)a0 priorityBlock:(id /* block */)a1;
- (void)removeObjectsWithEntries:(id)a0;
- (void)removeFirstOfObjects:(id)a0;
- (void)removeAllObjectsMatchingObjects:(id)a0;
- (void)prioritizeObjects:(id)a0;
- (void)resetPriorityForObjects:(id)a0;

@end
