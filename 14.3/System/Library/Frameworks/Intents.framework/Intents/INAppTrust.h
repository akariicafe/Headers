@interface INAppTrust : NSObject

+ (BOOL)shouldTrustExtensionForLaunch:(id)a0;
+ (id)extensionsTrustedForLaunch:(id)a0;
+ (BOOL)_shouldTrustExtensionForLaunch:(id)a0 withExplicitAppTrustCache:(id)a1;
+ (BOOL)shouldTrustAppForLaunch:(id)a0;
+ (BOOL)_shouldTrustAppForLaunch:(id)a0 withExplicitAppTrustCache:(id)a1;
+ (id)appsTrustedForLaunch:(id)a0;
+ (BOOL)_appRequiresExplicitTrust:(id)a0 withExplicitAppTrustCache:(id)a1;

@end
