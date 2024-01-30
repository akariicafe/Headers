@class NSString;

@interface HDHealthRecordsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)extensionForProfile:(id)a0;
- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)extensionForHealthDaemon:(id)a0;
- (id)orderedSyncEntities;
- (id)_databaseSchemaForProtectionClass:(long long)a0;
- (id)taskServerClasses;

@end
