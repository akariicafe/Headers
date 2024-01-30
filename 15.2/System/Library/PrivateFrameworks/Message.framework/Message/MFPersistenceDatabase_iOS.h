@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MFPersistenceDatabase_iOS : EDPersistenceDatabase <EFLoggable, MFMailMessageLibraryMigratorDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id migrationLock;
@property (nonatomic) BOOL migrationHasRun;
@property (nonatomic) BOOL createdTempTable;
@property (retain, nonatomic) NSMutableArray *postMigrationSteps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkInConnection:(id)a0;
- (void)mailMessageLibraryMigrator:(id)a0 isInitializingDatabaseWithConnection:(id)a1;
- (void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)a0;
- (BOOL)_migrateWithDatabaseConnection:(id)a0 migrator:(id)a1;
- (BOOL)enforceDataProtection;
- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 maxConcurrentReaders:(unsigned long long)a2 schema:(id)a3 protectedSchema:(id)a4 propertyMapper:(id)a5 protectedDatabasePersistence:(id)a6;
- (void).cxx_destruct;
- (void)mailMessageLibraryMigrator:(id)a0 detachProtectedDatabaseWithConnection:(id)a1;
- (BOOL)mailMessageLibraryMigrator:(id)a0 attachProtectedDatabaseWithName:(id)a1 connection:(id)a2 error:(id *)a3;
- (id)openConnectionIsWriter:(BOOL)a0;
- (void)addPostMigrationStep:(id)a0;

@end
