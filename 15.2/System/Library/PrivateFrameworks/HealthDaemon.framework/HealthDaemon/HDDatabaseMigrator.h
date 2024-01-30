@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (void)peace_addUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (void)future_addProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (id)boulderProtectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (id)tigrisProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)yukon_addUnprotectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)erieUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void)sky_addUnprotectedMigrationSteps;
- (void).cxx_destruct;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (id)okemoZursProtectedMigrationSteps;
- (id)init;
- (id)corryProtectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (id)cinarProtectedMigrationSteps;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (void)yukon_addProtectedMigrationSteps;
- (void)invalidate;
- (id)eagleProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (id)butlerUnprotectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (id)butlerProtectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (id)cinarUnprotectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (void)azul_addUnprotectedMigrationSteps;

@end
