@class NSString, NSUserDefaults;

@interface HDHeartDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider, HDDatabaseSchemaProvider> {
    NSUserDefaults *_heartNotificationsUserDefaults;
}

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;

- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)extensionForHealthDaemon:(id)a0;
- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)handleDatabaseObliteration;
- (void).cxx_destruct;
- (id)taskServerClasses;
- (id)init;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)extensionForProfile:(id)a0;
- (id)_databaseSchemaForProtectionClass:(long long)a0;
- (id)initWithHeartNotificationsUserDefaults:(id)a0;

@end
