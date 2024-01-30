@class NSManagedObjectModel, NSSQLModel, NSDictionary, NSMutableArray, NSNumber;

@interface PFCloudKitMetadataMigrationContext : NSObject

@property (readonly, nonatomic) NSMutableArray *migrationStatements;
@property (readonly, nonatomic) NSMutableArray *sqlEntitiesToCreate;
@property (readonly, nonatomic) BOOL hasWorkToDo;
@property (retain, nonatomic) NSManagedObjectModel *currentModel;
@property (retain, nonatomic) NSSQLModel *sqlModel;
@property (retain, nonatomic) NSManagedObjectModel *storeMetadataModel;
@property (retain, nonatomic) NSSQLModel *storeSQLModel;
@property (retain, nonatomic) NSNumber *storeMetadataVersion;
@property (retain, nonatomic) NSDictionary *storeMetadataVersionHashes;
@property (nonatomic) BOOL needsMetdataMigrationToNSCKRecordMetadata;
@property (nonatomic) BOOL needsOldTableDrop;
@property (nonatomic) BOOL needsMirroredRelationshipsLinkedToZone;
@property (nonatomic) BOOL needsImportAfterClientMigration;
@property (nonatomic) BOOL needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
@property (nonatomic) BOOL needsAnalyzedHistoryCheck;

- (id)init;
- (void)dealloc;
- (void)addMigrationStatement:(id)a0;
- (void)addSQLEntityToCreate:(id)a0;

@end
