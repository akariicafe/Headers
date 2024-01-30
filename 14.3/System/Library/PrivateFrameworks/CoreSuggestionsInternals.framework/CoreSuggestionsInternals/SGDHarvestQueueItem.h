@class CSSearchableItem;

@interface SGDHarvestQueueItem : NSObject

@property (nonatomic) int storageReason;
@property (readonly, nonatomic) long long itemId;
@property (readonly) CSSearchableItem *item;
@property (readonly, nonatomic) unsigned long long fails;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, nonatomic) unsigned char customPriorityCriteria;
@property (readonly, nonatomic) BOOL receivedOnPower;
@property (readonly, nonatomic) double receivedTime;

- (void)finish;
- (void).cxx_destruct;
- (void)markAsFailed;
- (id)initWithItemId:(long long)a0 item:(id)a1 fails:(int)a2 customPriorityCriteria:(unsigned char)a3 receivedOnPower:(BOOL)a4 receivedTime:(double)a5 storageReason:(int)a6;

@end
