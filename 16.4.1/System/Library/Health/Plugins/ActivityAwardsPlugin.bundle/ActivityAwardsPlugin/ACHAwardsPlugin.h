@class ACHMobileAssetProvider, NSString;
@protocol HDDatabaseSchemaProvider;

@interface ACHAwardsPlugin : NSObject <HDPlugin, HDTaskServerClassProvider, HDDatabaseSchemaProvider, HDSyncEntityProvider>

@property (retain, nonatomic) id<HDDatabaseSchemaProvider> schemaProvider;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider;
@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

+ (BOOL)shouldLoadPluginForDaemon:(id)a0;

- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)extensionForProfile:(id)a0;
- (id)init;
- (id)taskServerClasses;
- (id)orderedSyncEntities;
- (void).cxx_destruct;
- (id)extensionForHealthDaemon:(id)a0;

@end
