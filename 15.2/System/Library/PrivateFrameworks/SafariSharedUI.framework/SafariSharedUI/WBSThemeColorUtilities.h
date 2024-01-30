@interface WBSThemeColorUtilities : NSObject

+ (id)overrideTabColorForThemeColor:(id)a0;
+ (id)updateThemeColorForWebView:(id)a0 darkModeEnabled:(BOOL)a1;
+ (BOOL)shouldIgnoreThemeColorForContrastWithActiveTab:(id)a0 privateBrowsingEnabled:(BOOL)a1;
+ (BOOL)shouldOverrideTintColorForThemeColor:(id)a0;
+ (id)updateThemeColorForWebView:(id)a0 darkModeEnabled:(BOOL)a1 allowFallbackColors:(BOOL)a2 updateUnderPageBackgroundColor:(BOOL)a3;

@end
