@class NSString, NSUserDefaults;

@interface HDHeartDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider, HDDatabaseSchemaProvider, HDDemoDataGeneratorProvider> {
    NSUserDefaults *_heartNotificationsUserDefaults;
}

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;

- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)handleDatabaseObliteration;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)extensionForProfile:(id)a0;
- (id)init;
- (id)taskServerClasses;
- (void).cxx_destruct;
- (id)extensionForHealthDaemon:(id)a0;
- (id)demoDataGeneratorClasses;
- (id)_databaseSchemaForProtectionClass:(long long)a0;
- (id)initWithHeartNotificationsUserDefaults:(id)a0;

@end
