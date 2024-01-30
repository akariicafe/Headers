@interface AAPreferences : NSObject

+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (BOOL)isExperimentalModeEnabled;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (BOOL)isBackupForDataSeparationEnabled;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)shouldShowAccountContacts;
+ (long long)customHealthCheckIntervalMinutes;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;

@end
