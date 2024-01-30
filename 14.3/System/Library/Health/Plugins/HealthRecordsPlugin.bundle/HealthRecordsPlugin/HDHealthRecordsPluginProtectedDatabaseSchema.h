@class NSArray, NSString;

@interface HDHealthRecordsPluginProtectedDatabaseSchema : NSObject <HDHealthRecordsPluginDatabaseSchema>

@property (readonly, nonatomic) long long currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMigrationStepsWithMigrator:(id)a0 schemaName:(id)a1;

@end
