@class SGDWorkQueue;

@interface SGDHarvestQueueLegacy : SGDHarvestQueue {
    SGDWorkQueue *_workQueue;
    BOOL _highPriority;
}

- (id)initWithDirectory:(id)a0 highPriority:(BOOL)a1;
- (void)popBySourceKey:(id)a0 messageId:(id)a1 callback:(id /* block */)a2;
- (void)close;
- (void).cxx_destruct;
- (void)pop:(id /* block */)a0;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 item:(id)a3 customPriorityCriteria:(unsigned char)a4 callback:(id /* block */)a5;
- (void)countHighPriorityItems:(unsigned long long *)a0 lowPriorityItems:(unsigned long long *)a1;
- (void)popByItemId:(long long)a0 callback:(id /* block */)a1;
- (unsigned long long)count;

@end
