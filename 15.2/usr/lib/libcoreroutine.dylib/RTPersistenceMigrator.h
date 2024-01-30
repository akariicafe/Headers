@class RTPersistenceStore, NSManagedObjectModel, NSPersistentStoreCoordinator, NSDate;
@protocol RTPersistenceDelegate, RTPersistenceModelProvider;

@interface RTPersistenceMigrator : NSObject {
    NSPersistentStoreCoordinator *_cachedCoordinator;
}

@property (readonly) NSDate *migrationStartDate;
@property (readonly) NSDate *migrationEndDate;
@property (readonly) BOOL didVacuumStore;
@property (readonly, weak) RTPersistenceStore *store;
@property (readonly, weak) id<RTPersistenceModelProvider> modelProvider;
@property (readonly, weak) id<RTPersistenceDelegate> delegate;
@property unsigned long long state;
@property (retain, nonatomic) NSManagedObjectModel *nextModel;
@property (readonly) unsigned long long status;

- (id)initWithStore:(id)a0 modelProvider:(id)a1 delegate:(id)a2;
- (unsigned long long)__executeVacuumStepWithStore:(id)a0 coordinator:(id)a1 delegate:(id)a2 vacuumDate:(id)a3;
- (void)_executeSingleMigrationStep;
- (unsigned long long)run;
- (unsigned long long)_executePrepareStep;
- (void)_attemptMigration;
- (unsigned long long)__prepareImportStepWithSourceStore:(id)a0 sourceCoordinator:(id)a1 destinationStore:(id)a2 destinationCoordinator:(id)a3 model:(id)a4 allowMigration:(BOOL)a5;
- (id)_coordinatorForModel:(id)a0;
- (unsigned long long)_executeMigrateStep;
- (unsigned long long)__executeImportStepWithSourceStore:(id)a0 sourceCoordinator:(id)a1 destinationStore:(id)a2 destinationCoordinator:(id)a3 model:(id)a4;
- (void)__cleanupAfterImportWithStore:(id)a0 coordinator:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_executeImportStep;
- (unsigned long long)_executeDestroyStep;
- (id)__findCandidateStoresForImportStepWithStore:(id)a0;
- (unsigned long long)_executeRecreateStep;
- (id)init;
- (unsigned long long)_executeOpenStep;
- (unsigned long long)_executeCacheStep;
- (unsigned long long)_executeVacuumStep;
- (unsigned long long)_executeRekeyStep;

@end
