@class NSString;

@interface ASActivitySharingPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDTaskServerClassProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;

- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (id)_createTableSQLStringForCompetitionLists;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)_dropTableSQLStringForCompetitionLists;
- (id)_dropTableSQLStringForCompetitions;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)extensionForProfile:(id)a0;
- (id)init;
- (id)taskServerClasses;
- (id)extensionForHealthDaemon:(id)a0;

@end
