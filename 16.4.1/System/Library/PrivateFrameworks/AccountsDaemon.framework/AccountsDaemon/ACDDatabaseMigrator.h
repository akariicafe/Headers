@class NSDictionary, NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface ACDDatabaseMigrator : NSObject {
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_privateCoordinator;
}

@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSDictionary *storeOptions;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)a0;
- (id)_compatibleModelForStoreAtURL:(id)a0;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)a0;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)a0;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_postProcessMigrationFromVersion:(long long)a0 migrationData:(id)a1;
- (id)_setUpContextForMigration;
- (long long)_versionForModel:(id)a0;
- (id)initForDatabaseAtURL:(id)a0 persistentStoreCoordinator:(id)a1 storeOptions:(id)a2;
- (BOOL)runReturningError:(id *)a0;

@end
