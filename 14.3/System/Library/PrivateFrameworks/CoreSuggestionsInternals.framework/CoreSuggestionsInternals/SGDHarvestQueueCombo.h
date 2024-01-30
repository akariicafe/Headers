@class SGDHarvestQueueOnDisk, NSArray, SGDHarvestQueueLegacy, SGDHarvestQueueInMemory;

@interface SGDHarvestQueueCombo : SGDHarvestQueue {
    NSArray *_backends;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) SGDHarvestQueueOnDisk *onDisk;
@property (readonly, nonatomic) SGDHarvestQueueLegacy *legacyHighPriority;
@property (readonly, nonatomic) SGDHarvestQueueLegacy *legacyLowPriority;
@property (readonly, nonatomic) SGDHarvestQueueInMemory *inMemory;

- (void)popBySourceKey:(id)a0 messageId:(id)a1 callback:(id /* block */)a2;
- (void)close;
- (void).cxx_destruct;
- (void)pop:(id /* block */)a0;
- (void)dealloc;
- (unsigned long long)countStructuredEventCandidates;
- (id)backends;
- (void)popInMemory:(id /* block */)a0;
- (void)popByCustomPriorityCriteria:(unsigned char)a0 callback:(id /* block */)a1;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 customPriorityCriteria:(unsigned char)a3 item:(id)a4 callback:(id /* block */)a5;
- (void)countHighPriorityItems:(unsigned long long *)a0 lowPriorityItems:(unsigned long long *)a1;
- (void)popHighPriority:(id /* block */)a0;
- (void)popByItemId:(long long)a0 callback:(id /* block */)a1;
- (unsigned long long)count;
- (unsigned long long)countInMemory;
- (id)initWithOnDiskQueue:(id)a0 legacyHighPriority:(id)a1 legacyLowPriority:(id)a2 inMemoryCache:(id)a3;

@end
