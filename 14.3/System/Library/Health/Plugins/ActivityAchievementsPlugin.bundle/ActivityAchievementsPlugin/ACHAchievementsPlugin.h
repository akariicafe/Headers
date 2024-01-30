@class NSString;

@interface ACHAchievementsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

- (void)_addGracePredicateColumnsMigrationToMigrator:(id)a0;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (void)_addValidateEarnedInstanceRowStepToMigrator:(id)a0;
- (void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)a0;
- (id)extensionForProfile:(id)a0;
- (void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)a0;
- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)a0;
- (void)_addAddSuffixesColumnMigrationToMigrator:(id)a0;
- (id)extensionForHealthDaemon:(id)a0;
- (id)orderedSyncEntities;
- (void)_addVersion5MigratorToMigrator:(id)a0;
- (id)taskServerClasses;
- (void)_addGraceExpressionColumnsMigrationToMigrator:(id)a0;
- (void)_addResetSyncAnchorsMigrationStepToMigrator:(id)a0;

@end
