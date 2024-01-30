@class NSString, FCCKZoneSchema;
@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseSubscriptionsStartUpMiddleware : NSObject <FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware> {
    FCCKZoneSchema *_legacyZoneSchema;
    FCCKZoneSchema *_secureZoneSchema;
    id<FCCKDatabaseRecordMiddleware> _encryptionMiddleware;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databaseMigrationZoneNamesForDatabase:(id)a0;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)a0 database:(id)a1;
- (void)databaseMigrationDidFinishForDatabase:(id)a0 result:(long long)a1;
- (void).cxx_destruct;
- (id)databaseMigrationMigrateRecord:(id)a0 database:(id)a1 error:(id *)a2;
- (BOOL)databaseMigrationShouldDropRecord:(id)a0 database:(id)a1;
- (void)performStartUpForDatabase:(id)a0 completion:(id /* block */)a1;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)a0 database:(id)a1;

@end
