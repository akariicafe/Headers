@class _PASLock;

@interface _PASDatabaseMigrator : NSObject {
    _PASLock *_contexts;
}

- (id)_contextForMigrationObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned char)migrateDatabasesToVersion:(unsigned int)a0;
- (id)initWithMigrationObjects:(id)a0;
- (BOOL)_allContextsAtVersionZeroWithContexts:(id)a0;
- (BOOL)migrationNeeded;
- (unsigned char)_migrateDatabasesWithContexts:(id)a0 toVersion:(unsigned int)a1;
- (BOOL)_migrationNeededWithContexts:(id)a0 toVersion:(unsigned int)a1;
- (BOOL)_anyContextHasFutureVersionWithContexts:(id)a0;
- (id)description;
- (unsigned char)_clearDatabase:(id)a0;
- (unsigned char)_unmigrateDatabasesWithContexts:(id)a0;
- (unsigned char)_migrateOneStepToVersion:(unsigned int)a0 contexts:(id)a1;
- (BOOL)_canContinueMigratingWithContexts:(id)a0;
- (unsigned char)unmigrateDatabases;
- (unsigned char)_runQuery:(id)a0 context:(id)a1 database:(id)a2;
- (unsigned char)_skipFromZeroSchemaWithContexts:(id)a0;
- (unsigned char)_runQueries:(id)a0 nextVersion:(unsigned int)a1 context:(id)a2;
- (void)_prepareContexts:(id)a0;
- (unsigned char)migrateDatabases;
- (BOOL)_anyContextHasMismatchedVersionWithContexts:(id)a0;

@end
