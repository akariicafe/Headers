@class NSMutableSet, CKRecordZoneID, NSMutableArray, FCCKPrivateDatabase;
@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {
    FCCKPrivateDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    id<FCCKDatabaseMigrator> _migrator;
    id<FCCKZonePruningAssistant> _pruningAssistant;
    id /* block */ _migrationCompletionHandler;
    NSMutableSet *_createdZones;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
