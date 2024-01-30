@interface AAPreferences : NSObject

+ (BOOL)isMultipleFullAccountsEnabled;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isExperimentalModeEnabled;

@end
