@class NSString;

@interface ACHDatabaseSchemaProvider : NSObject <HDDatabaseSchemaProvider>

@property (readonly, copy, nonatomic) NSString *schemaName;

- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)_addEarnedInstancesExternalIdentifierMigrationToMigrator:(id)a0;
- (void)_updateGoalFor31DaysSeptemberMonthlyChallenge:(id)a0;
- (void)_addValidateEarnedInstanceRowStepToMigrator:(id)a0;
- (void)_addNullTemplatesRemovalToMigrator:(id)a0;
- (void)_removeErroneousWorkoutTemplates:(id)a0;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (void)_addVersion5MigratorToMigrator:(id)a0;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)a0;
- (void)_removeErroneousFitnessPlusTemplates:(id)a0;
- (void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)a0;
- (void)_addGracePredicateColumnsMigrationToMigrator:(id)a0;
- (void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)a0;
- (void)_addDailyTargetExpressionAndUnitColumnsMigrationToMigrator:(id)a0;
- (void)_addMisnamedTemplateRemovalToMigrator:(id)a0;
- (void)_addAddSuffixesColumnMigrationToMigrator:(id)a0;
- (void)_addResetSyncAnchorsMigrationStepToMigrator:(id)a0;
- (void)_addGraceExpressionColumnsMigrationToMigrator:(id)a0;
- (void)_addTemplateRowIdBumpToMigrator:(id)a0;

@end
