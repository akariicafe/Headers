@class NSArray, NSString, HDHFDataStore, HDSQLiteDatabase, _HKBehavior;
@protocol HDDatabaseMigrationTransactionDelegate;

@interface HDDatabaseMigrationTransaction : NSObject

@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, copy, nonatomic) NSArray *schemaProviders;
@property (weak, nonatomic) id<HDDatabaseMigrationTransactionDelegate> delegate;
@property (readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property (readonly, copy, nonatomic) NSString *defaultDatabaseName;
@property (readonly, nonatomic) long long defaultProtectionClass;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) HDHFDataStore *HFDataStore;
@property (readonly, nonatomic) BOOL isProtectedMigration;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)a0;

- (long long)migrateOrCreateSchemaWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_presentRollbackAlertForSchema:(id)a0 protectionClass:(long long)a1 foundVersion:(long long)a2 currentVersion:(long long)a3;
- (BOOL)_insertDatabaseIdentifier:(id)a0 error:(id *)a1;
- (long long)_verifyDatabaseIdentifiersAreValidWithError:(id *)a0;
- (id)initWithUnprotectedDatabase:(id)a0 protectedDatabase:(id)a1 HFDataStore:(id)a2 schemaProviders:(id)a3 behavior:(id)a4;
- (BOOL)_createDataTablesInDatabase:(id)a0 entityClasses:(id)a1 requiredPrefix:(id)a2 error:(id *)a3;
- (long long)_createEntitiesWithEntityClasses:(id)a0 error:(id *)a1;
- (long long)_migrateOrCreateSchemaWithEntityClasses:(id)a0 error:(id *)a1;
- (BOOL)_migrationRequiredForProtectionClass:(long long)a0 migrator:(id)a1 schemaProviders:(id)a2 error:(id *)a3;
- (long long)_migrateFromUserVersion:(long long)a0 didRequireMigration:(BOOL *)a1 error:(id *)a2;
- (BOOL)_createEntitiesForSchemaProvider:(id)a0 protectionClass:(long long)a1 migrator:(id)a2 error:(id *)a3;
- (void)_enableIncrementalAutovacuumIfNeeded;
- (id)databaseNameForProtectionClass:(long long)a0;
- (BOOL)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)a0 schemaProviders:(id)a1 migrator:(id)a2 error:(id *)a3;

@end
