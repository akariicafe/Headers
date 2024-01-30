@class NSArray, NSString;

@interface HDHearingPluginUnprotectedDatabaseSchema : NSObject <HDHearingPluginDatabaseSchema>

@property (readonly, nonatomic) long long currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMigrationStepsForSchemaName:(id)a0 migrator:(id)a1;

@end
