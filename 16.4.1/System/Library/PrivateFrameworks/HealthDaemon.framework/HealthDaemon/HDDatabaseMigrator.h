@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (void)sydney_addProtectedMigrationSteps;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (id)emetUnprotectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (id)monarchProtectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (id)okemoZursProtectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (void)future_addProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (id)boulderProtectedMigrationSteps;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (id)butlerUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)monarchUnprotectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (void)azul_addProtectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (id)init;
- (id)butlerProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (void)invalidate;
- (id)corryProtectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (void)addPrimaryMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (id)erieProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;

@end
