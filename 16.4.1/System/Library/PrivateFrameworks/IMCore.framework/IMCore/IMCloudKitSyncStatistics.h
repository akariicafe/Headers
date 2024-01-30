@interface IMCloudKitSyncStatistics : NSObject

@property (nonatomic) unsigned long long syncedChatCount;
@property (nonatomic) unsigned long long totalChatCount;
@property (nonatomic) unsigned long long syncedAttachmentCount;
@property (nonatomic) unsigned long long totalAttachmentCount;
@property (nonatomic) unsigned long long syncedMessageCount;
@property (nonatomic) unsigned long long totalMessageCount;
@property (nonatomic) unsigned long long totalRecordCount;
@property (nonatomic) unsigned long long syncedRecordCount;
@property (readonly, nonatomic) double percentSynced;

+ (id)_createSyncStatisticsDictionary:(long long)a0 messageSyncCount:(long long)a1 chatCount:(long long)a2 chatSyncCount:(long long)a3 attachmentCount:(long long)a4 attachmentSyncCount:(long long)a5;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)a0 syncType:(long long)a1 count:(double)a2 max:(double)a3;
+ (double)calculatePercentageOfTotal:(double)a0 count:(double)a1;
+ (id)percentStringFromDouble:(double)a0;
+ (id)percentStringFromTotal:(double)a0 count:(double)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_statsString:(id)a0 count:(long long)a1 total:(long long)a2;
- (id)_syncStatisticsDictionary;
- (id)initWithStatisticsDictionary:(id)a0;

@end
