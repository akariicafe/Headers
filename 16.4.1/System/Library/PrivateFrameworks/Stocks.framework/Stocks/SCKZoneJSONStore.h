@class NSString, CKServerChangeToken, NSArray, NSDate;

@interface SCKZoneJSONStore : NSObject <SCKZoneStore>

@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (void)clearPendingCommandsUpToCount:(unsigned long long)a0;
- (void)addPendingCommands:(id)a0;
- (void)applyServerRecordsDiff:(id)a0;
- (void).cxx_destruct;
- (id)initWithZoneName:(id)a0 serverRecords:(id)a1 lastSyncDate:(id)a2 lastDirtyDate:(id)a3 serverChangeToken:(id)a4 pendingCommands:(id)a5;

@end
