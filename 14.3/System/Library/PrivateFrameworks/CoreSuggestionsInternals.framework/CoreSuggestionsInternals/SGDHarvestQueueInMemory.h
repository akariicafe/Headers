@class SGDHarvestQueueOnDisk, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SGDHarvestQueueInMemory : SGDHarvestQueue {
    unsigned long long _limit;
    double _ttl;
    long long _itemIdCounter;
    NSMutableArray *_items;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) SGDHarvestQueueOnDisk *other;

- (void)writePermafail:(id)a0;
- (void)popBySourceKey:(id)a0 messageId:(id)a1 callback:(id /* block */)a2;
- (void)close;
- (void).cxx_destruct;
- (long long)_indexOfItemWithIdLocked:(long long)a0;
- (void)_popCallback:(id /* block */)a0 where:(id /* block */)a1 or:(id /* block */)a2;
- (void)pop:(id /* block */)a0;
- (void)deleteAllItemsDangerously;
- (void)_sortLocked;
- (unsigned long long)countStructuredEventCandidates;
- (void)popInMemory:(id /* block */)a0;
- (void)popByCustomPriorityCriteria:(unsigned char)a0 callback:(id /* block */)a1;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 customPriorityCriteria:(unsigned char)a3 item:(id)a4 callback:(id /* block */)a5;
- (void)countHighPriorityItems:(unsigned long long *)a0 lowPriorityItems:(unsigned long long *)a1;
- (void)popHighPriority:(id /* block */)a0;
- (id)initWithLimit:(unsigned long long)a0 ttl:(double)a1 flushingToQueue:(id)a2;
- (void)popByItemId:(long long)a0 callback:(id /* block */)a1;
- (unsigned long long)count;
- (unsigned long long)countInMemory;
- (void)_flushWithIndexLockedAsync:(unsigned long long)a0;
- (void)_flushWithItemIdLockedAsync:(long long)a0;
- (void)_deleteWithItemId:(long long)a0 completion:(id /* block */)a1;

@end
