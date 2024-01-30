@class NSPersistentStore, NSString, RCDatabaseMetadata, NSManagedObjectContext, RCQueryManager, NSDictionary, RCRemoteChangeMerger, RCRegulatoryLogger;

@interface RCPersistentContainer : NSPersistentContainer {
    NSString *_transactionAuthor;
    RCRegulatoryLogger *_regulatoryLogger;
    RCRemoteChangeMerger *_remoteChangeMerger;
    NSManagedObjectContext *_fetchedIvarContext;
    BOOL _viewContextIsConfigured;
}

@property (readonly, nonatomic) RCDatabaseMetadata *metadata;
@property (readonly, nonatomic) BOOL automaticallyDownloadFileBackedFutures;
@property (readonly, nonatomic) NSDictionary *cloudStoresByID;
@property (readonly, nonatomic) NSPersistentStore *store;
@property (readonly, nonatomic) RCQueryManager *queryManager;

+ (void)initialize;
+ (id)newObjectModel;
+ (id)mirroringContainer;
+ (id)sharedContainer;

- (void)_waitForFetchedIvars;
- (id)_valueForDatabaseProperty:(id)a0 context:(id)a1;
- (BOOL)unsetLocalEncryptedTitleMigrationFlag;
- (void)_migrateDatabaseIfNecessary:(id)a0;
- (id)_cloudRecordingsInContext:(id)a0;
- (void)_configureContext:(id)a0;
- (void)_logIfDescrepencyWithKey:(id)a0 cloudRecordingValue:(id)a1 legacyRecordingValue:(id)a2;
- (id)_storeDescriptionForStore:(id)a0 xpcServiceName:(id)a1 configuration:(id)a2;
- (id)newBackgroundModel;
- (BOOL)_manuallyMigrateCloudRecordingsDatabase:(id)a0 error:(id *)a1;
- (id)_legacyRecordingWithUniqueID:(id)a0 context:(id)a1;
- (id)newChangeTrackingBackgroundModel;
- (void)_fetchIvarsAsync;
- (id)newMainQueueModel;
- (id)_fetchLegacyRecordingsForMigrationWithContext:(id)a0;
- (id)_createMirroringDelegateForContainer:(id)a0;
- (void)_saveMigrationStep:(id)a0 migrationFlag:(id)a1;
- (void)_deleteOrphanedEntityRevisionsWithContext:(id)a0;
- (BOOL)performLocalEncryptedTitleMigrationIfNeeded;
- (id)_initWithMirroring:(BOOL)a0 useXPCStore:(BOOL)a1;
- (void)_validateMigratedRecording:(id)a0 legacyRecording:(id)a1;
- (void)_handleCloudKitContainerEvent:(id)a0;
- (id)newContextWithConcurrencyType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_handleCloudKitContainerEventChangedNotification:(id)a0;

@end
