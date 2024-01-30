@class CKServerChangeToken, NSArray, NSDate;

@interface SCKZoneMemoryStore : NSObject <SCKZoneStore>

@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (void)clearPendingCommandsUpToCount:(unsigned long long)a0;
- (id)init;
- (void)addPendingCommands:(id)a0;
- (void)applyServerRecordsDiff:(id)a0;
- (void).cxx_destruct;

@end
