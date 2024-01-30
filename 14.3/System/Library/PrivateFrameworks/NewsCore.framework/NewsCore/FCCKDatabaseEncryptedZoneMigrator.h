@class NSSet, NSString, FCCKPrivateDatabaseSchema;
@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator>

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *sourceSchema;
@property (retain, nonatomic) id<FCCKDatabaseRecordMiddleware> recordEncryptionMiddleware;
@property (copy, nonatomic) id /* block */ deprecatedBlock;
@property (retain, nonatomic) NSSet *sourceZoneNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databaseMigrationRecordNamesToMigrateInZone:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)a0 database:(id)a1;
- (BOOL)databaseMigrationShouldDropRecord:(id)a0 database:(id)a1;
- (id)databaseMigrationZoneNamesForDatabase:(id)a0;
- (id)databaseMigrationMigrateRecord:(id)a0 database:(id)a1 error:(id *)a2;
- (BOOL)_shouldMigrateRecord:(id)a0 database:(id)a1;
- (BOOL)_isEnabledForDatabase:(id)a0;
- (id)initWithSourceSchema:(id)a0 recordEncryptionMiddleware:(id)a1 deprecatedBlock:(id /* block */)a2;
- (void)databaseMigrationDidFinishForDatabase:(id)a0 result:(long long)a1;

@end
