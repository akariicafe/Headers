@class NSString, SGDHarvestQueueInMemory;

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem {
    BOOL _highPriority;
    SGDHarvestQueueInMemory *_parentQueue;
}

@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *messageId;
@property BOOL inProgress;
@property BOOL beingDeleted;

- (void)finish;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItemId:(long long)a0 item:(id)a1 fails:(int)a2 sourceKey:(id)a3 messageId:(id)a4 highPriority:(BOOL)a5 customPriorityCriteria:(unsigned char)a6 parentQueue:(id)a7;
- (void)markAsFailed;
- (BOOL)highPriority;

@end
