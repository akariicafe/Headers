@class NSString, ACHMobileAssetProvider;

@interface ACHAchievementsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider> {
    ACHMobileAssetProvider *_mobileAssetProvider;
}

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

- (void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)a0;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (void)_addGracePredicateColumnsMigrationToMigrator:(id)a0;
- (id)extensionForHealthDaemon:(id)a0;
- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (id)orderedSyncEntities;
- (void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)a0;
- (void).cxx_destruct;
- (id)taskServerClasses;
- (id)init;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)extensionForProfile:(id)a0;
- (void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)a0;
- (void)_addVersion5MigratorToMigrator:(id)a0;
- (void)_addValidateEarnedInstanceRowStepToMigrator:(id)a0;
- (void)_addGraceExpressionColumnsMigrationToMigrator:(id)a0;
- (void)_addAddSuffixesColumnMigrationToMigrator:(id)a0;
- (void)_addResetSyncAnchorsMigrationStepToMigrator:(id)a0;

@end
