@class NSString;

@interface ASActivitySharingPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDTaskServerClassProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;

- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)init;
- (id)_dropTableSQLStringForCompetitions;
- (id)extensionForProfile:(id)a0;
- (id)_dropTableSQLStringForCompetitionLists;
- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)_createTableSQLStringForCompetitionLists;
- (id)extensionForHealthDaemon:(id)a0;
- (id)taskServerClasses;

@end
