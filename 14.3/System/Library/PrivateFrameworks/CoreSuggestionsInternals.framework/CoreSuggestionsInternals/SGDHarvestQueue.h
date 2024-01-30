@class NSString;

@interface SGDHarvestQueue : NSObject {
    NSString *_permafailDirectory;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long countInMemory;
@property (readonly, nonatomic) unsigned long long countStructuredEventCandidates;

+ (id)defaultQueue;
+ (void)swapInEphemeralDefaultQueueForTesting;
+ (void)swapInEphemeralDefaultQueueForTesting:(id)a0;
+ (void)swapOutEphemeralDefaultQueueForTesting;
+ (id)pathForDefaultQueue;
+ (id)queueWithOnDiskStorage:(id)a0;
+ (id)queueWithLegacyStorage:(id)a0 highPriority:(BOOL)a1;
+ (id)queueCachingInMemoryBefore:(id)a0 limit:(unsigned long long)a1 ttl:(double)a2;
+ (id)queueCachingInMemoryBefore:(id)a0;

- (void)writePermafail:(id)a0;
- (void)popBySourceKey:(id)a0 messageId:(id)a1 callback:(id /* block */)a2;
- (void)close;
- (void).cxx_destruct;
- (void)pop:(id /* block */)a0;
- (void)popInMemory:(id /* block */)a0;
- (void)popByCustomPriorityCriteria:(unsigned char)a0 callback:(id /* block */)a1;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 customPriorityCriteria:(unsigned char)a3 item:(id)a4 callback:(id /* block */)a5;
- (void)countHighPriorityItems:(unsigned long long *)a0 lowPriorityItems:(unsigned long long *)a1;
- (void)popHighPriority:(id /* block */)a0;
- (void)popByItemId:(long long)a0 callback:(id /* block */)a1;
- (void)performMaintenanceTasks;
- (id)permafailDirectory;
- (void)setPermafailDirectory:(id)a0;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 item:(id)a3 callback:(id /* block */)a4;

@end
