@class CKServerChangeToken, NSMutableDictionary, NSDate;

@interface SCWDatabaseMemoryStore : NSObject <SCWDatabaseStore>

@property (copy, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled;

- (id)zoneStoreForSchema:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
