@interface _WKSystemPreferences : NSObject

+ (BOOL)isCaptivePortalModeEnabled;
+ (BOOL)isCaptivePortalModeIgnored:(id)a0;
+ (void)setCaptivePortalModeEnabled:(BOOL)a0;
+ (void)setCaptivePortalModeIgnored:(id)a0 ignore:(BOOL)a1;

@end
