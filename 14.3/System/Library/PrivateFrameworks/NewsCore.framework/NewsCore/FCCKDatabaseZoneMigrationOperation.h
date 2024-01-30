@class NSMutableSet, CKRecordZoneID, NSMutableArray, FCCKPrivateDatabase;
@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation

@property (retain, nonatomic) NSMutableSet *createdZones;
@property (retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion;
@property (retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) id<FCCKDatabaseMigrator> migrator;
@property (retain, nonatomic) id<FCCKZonePruningAssistant> pruningAssistant;
@property (copy, nonatomic) id /* block */ migrationCompletionHandler;

- (void)prepareOperation;
- (void)_migrateEntireZoneWithCompletionHandler:(id /* block */)a0;
- (id)_pruneRecords:(id)a0;
- (void)_migrateIndividualRecordsWithCompletionHandler:(id /* block */)a0;
- (void)_migrateAndUpdateRecords:(id)a0 completion:(id /* block */)a1;
- (void)_gatherRecordsToMigrateWithCompletionHandler:(id /* block */)a0;
- (void)_migrateRecordIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_continueGatheringRecordsWithPreviousServerChangeToken:(id)a0 recordsAlreadyFetched:(id)a1 completionHandler:(id /* block */)a2;
- (id)_uncreatedZonesInRecords:(id)a0;
- (BOOL)_shouldStopGatheringAfterFetchingRecords:(id)a0 cumulativeRecords:(id)a1;
- (void)_saveMigratedRecords:(id)a0 completion:(id /* block */)a1;
- (void)_createZones:(id)a0 completion:(id /* block */)a1;
- (void)_migrateRecords:(id)a0 completion:(id /* block */)a1;
- (id)_migratedRecord:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
