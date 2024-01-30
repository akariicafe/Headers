@class NSMutableArray, FCCKPrivateDatabase;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion;
@property (retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) id<FCCKDatabaseMigrator> migrator;
@property (copy, nonatomic) id /* block */ migrationCompletionHandler;

- (void)prepareOperation;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)performOperation;
- (void)_migrateZoneIDs:(id)a0 completion:(id /* block */)a1;
- (void)_migrateZoneID:(id)a0 completion:(id /* block */)a1;
- (void)operationWillFinishWithError:(id)a0;

@end
