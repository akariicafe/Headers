@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject

@property (retain, nonatomic) NSMutableDictionary *inMemorySyncStatistics;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_incrementCountsForColumnSyncedKey:(id)a0 syncedColumnAmountToIncrease:(unsigned long long)a1 totalColumnAmountKey:(id)a2 totalColumnAmountToIncrease:(unsigned long long)a3;
- (id)currentInMemorySyncStatistics;
- (void)incrementSyncedAttachmentCount:(unsigned long long)a0 incrementTotalAttachmentCount:(unsigned long long)a1;
- (void)incrementSyncedChatCount:(unsigned long long)a0 incrementTotalChatCount:(unsigned long long)a1;
- (void)incrementSyncedMessageCount:(unsigned long long)a0 incrementTotalMessageCount:(unsigned long long)a1;
- (void)refreshWithDBSyncStatistics;

@end
