@class FCCKZoneSchema, NSString;
@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseSubscriptionsStartUpMiddleware : NSObject <FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware>

@property (readonly, nonatomic) FCCKZoneSchema *legacyZoneSchema;
@property (readonly, nonatomic) FCCKZoneSchema *secureZoneSchema;
@property (readonly, nonatomic) id<FCCKDatabaseRecordMiddleware> encryptionMiddleware;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databaseMigrationRecordNamesToMigrateInZone:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)a0 database:(id)a1;
- (BOOL)databaseMigrationShouldDropRecord:(id)a0 database:(id)a1;
- (id)databaseMigrationZoneNamesForDatabase:(id)a0;
- (void)performStartUpForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)_associateChildOperation:(id)a0;
- (id)databaseMigrationMigrateRecord:(id)a0 database:(id)a1 error:(id *)a2;
- (id)_promiseMigrationIsAllowedWithDatabase:(id)a0;
- (id)_promiseMigrationWithDatabase:(id)a0;
- (id)_promiseDeletionWithDatabase:(id)a0;
- (id)_promiseSentinelModificationWithDatabase:(id)a0 modification:(id /* block */)a1;
- (void)_runChildOperation:(id)a0;
- (id)initWithLegacyZoneSchema:(id)a0 secureZoneSchema:(id)a1 encryptionMiddlewawre:(id)a2;
- (void)databaseMigrationDidFinishForDatabase:(id)a0 result:(long long)a1;

@end
