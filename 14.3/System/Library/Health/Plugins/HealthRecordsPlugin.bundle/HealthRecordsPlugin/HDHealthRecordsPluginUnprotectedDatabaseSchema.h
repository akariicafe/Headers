@class NSArray, NSString;

@interface HDHealthRecordsPluginUnprotectedDatabaseSchema : NSObject <HDHealthRecordsPluginDatabaseSchema>

@property (readonly, nonatomic) long long currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_peace_addClinicalAPIRemindersTableWithTransaction:(id)a0 error:(id *)a1;
- (void)registerMigrationStepsWithMigrator:(id)a0 schemaName:(id)a1;

@end
