@class PFCloudKitMetadataMigrationContext, PFCloudKitMetricsClient, NSSQLCore, CKRecordZoneID, NSManagedObjectContext;

@interface PFCloudKitMetadataModelMigrator : NSObject

@property (readonly, nonatomic) NSSQLCore *store;
@property (readonly, nonatomic) NSManagedObjectContext *metadataContext;
@property (readonly, nonatomic) PFCloudKitMetadataMigrationContext *context;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, nonatomic) CKRecordZoneID *defaultZoneID;
@property (readonly, nonatomic) PFCloudKitMetricsClient *metricsClient;

- (void)addDropTableStatementsForOldMetadataTablesToContext:(id)a0 withAdapter:(id)a1;
- (void)addMigrationStatementForAddingAttribute:(id)a0 toContext:(id)a1 inStore:(id)a2;
- (BOOL)commitMigrationMetadataAndCleanup:(id *)a0;
- (void)dealloc;
- (BOOL)computeAncillaryEntityPrimaryKeyTableEntriesForStore:(id)a0 error:(id *)a1;
- (id)fetchSchemaSQLForEntity:(id)a0 usingConnection:(id)a1;
- (BOOL)checkForRecordMetadataZoneCorruptionInStore:(id)a0 error:(id *)a1;
- (BOOL)addMigrationStatementsToDeleteDuplicateMirroredRelationshipsToContext:(id)a0 withManagedObjectContext:(id)a1 andSQLEntity:(id)a2 error:(id *)a3;
- (BOOL)checkAndPerformMigrationIfNecessary:(id *)a0;
- (BOOL)migrateBatchOfObjects:(id)a0 forStore:(id)a1 inContext:(id)a2 error:(id *)a3;
- (BOOL)migrateMetadataForObjectsInStore:(id)a0 toNSCKRecordMetadataUsingContext:(id)a1 error:(id *)a2;
- (BOOL)calculateMigrationStepsWithConnection:(id)a0 error:(id *)a1;
- (BOOL)checkForCorruptedRecordMetadataInStore:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (void)addMigrationStatementToContext:(id)a0 forRenamingAttributeNamed:(id)a1 withOldColumnName:(id)a2 toAttributeName:(id)a3 onOldSQLEntity:(id)a4 andCurrentSQLEntity:(id)a5;
- (BOOL)cleanUpAfterClientMigrationWithStore:(id)a0 andContext:(id)a1 error:(id *)a2;
- (BOOL)applyMigrationChangesWithConnection:(id)a0 error:(id *)a1;
- (BOOL)prepareContextWithConnection:(id)a0 error:(id *)a1;
- (id)initWithStore:(id)a0 metadataContext:(id)a1 databaseScope:(long long)a2 defaultZoneID:(id)a3 metricsClient:(id)a4;

@end
