@class NSPersistentStore, NSString, NSArray, RCDatabaseMetadata, NSSet, NSDate, NSPersistentHistoryToken, NSCloudKitMirroringDelegateOptions, NSMutableArray;

@interface RCPersistentContainer : NSPersistentContainer {
    NSArray *_cloudStores;
    NSString *_cloudStoreIdentifier;
    NSString *_transactionAuthor;
    NSSet *_relevantProperties;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSMutableArray *_transactionsBuffer;
    NSArray *_contextsToNotify;
    NSDate *_changeNotificationDate;
}

@property (readonly, nonatomic) NSPersistentStore *cloudStore;
@property (readonly, nonatomic) RCDatabaseMetadata *metadata;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions;

+ (void)initialize;
+ (id)newObjectModel;
+ (id)mirroringContainer;
+ (id)sharedContainer;

- (BOOL)_isRelevantTransaction:(id)a0;
- (void).cxx_destruct;
- (void)_migrateDatabaseIfNecessary:(id)a0;
- (id)_initWithMirroring:(BOOL)a0 useXPCStore:(BOOL)a1;
- (void)_handleRemoteChangeNotificationOnMainQueue:(id)a0;
- (id)_legacyRecordingWithUniqueID:(id)a0 context:(id)a1;
- (id)_cloudRecordingsInContext:(id)a0;
- (void)_deleteOrphanedEntityRevisionsWithContext:(id)a0;
- (id)newContextWithConcurrencyType:(unsigned long long)a0;
- (void)_handleRemoteChangeNotification:(id)a0;
- (id)_nextTransactionAfterToken:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_valueForDatabaseProperty:(id)a0 context:(id)a1;
- (id)_fetchLegacyRecordingsForMigrationWithContext:(id)a0;

@end
