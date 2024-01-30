@class NSBackgroundActivityScheduler;

@interface DAEASOAuthMigrationActivity : NSObject

@property (retain, nonatomic) NSBackgroundActivityScheduler *scheduler;

+ (BOOL)profileMigrationEnabled;
+ (BOOL)profileMigrationDisabled;

- (void).cxx_destruct;
- (id /* block */)_triggerAccountMigration;
- (void)_retrieveMigrationStatusFromConfigurationURI:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_isExchangeBasicAccount:(id)a0;
- (BOOL)_serverMigrationEnabled;
- (BOOL)_shouldMigrateExchangeAccountToOAuth:(id)a0;
- (void)scheduleActivity;
- (void)invalidateActivity;

@end
