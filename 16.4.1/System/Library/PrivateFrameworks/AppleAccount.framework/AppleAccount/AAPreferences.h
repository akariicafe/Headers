@interface AAPreferences : NSObject

+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (BOOL)shouldShowAccountContacts;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (BOOL)isSkipPurgeAndPullBeforeHealthChecksEnabled;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (BOOL)shouldEnableFastSignIn;
+ (void)setSkipPurgeAndPullBeforeHealthChecksEnabled:(BOOL)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)isExperimentalModeEnabled;
+ (BOOL)isHealthCheckTTREnabled;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (BOOL)isBackupForDataSeparationEnabled;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (BOOL)isRunningInStoreDemoMode;

@end
