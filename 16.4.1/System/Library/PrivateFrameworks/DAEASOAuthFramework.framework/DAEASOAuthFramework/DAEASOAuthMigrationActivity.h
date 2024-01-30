@class NSBackgroundActivityScheduler;

@interface DAEASOAuthMigrationActivity : NSObject

@property (retain, nonatomic) NSBackgroundActivityScheduler *scheduler;

+ (BOOL)profileMigrationDisabled;
+ (BOOL)profileMigrationEnabled;

- (void).cxx_destruct;
- (BOOL)_isExchangeBasicAccount:(id)a0;
- (unsigned long long)_migrateExchangeAccountToOAuthDecision:(id)a0 disallowedDomains:(id)a1 disallowedHosts:(id)a2;
- (id)_migrationDecisionString:(unsigned long long)a0;
- (void)_retrieveMigrationStatusFromConfigurationURI:(id)a0 withCompletion:(id /* block */)a1;
- (void)_sendAnalyticsForMigratingAccount:(id)a0 withStatus:(id)a1;
- (id)_serverMigrationStatus;
- (id /* block */)_triggerAccountMigration;
- (void)invalidateActivity;
- (void)scheduleActivity;

@end
