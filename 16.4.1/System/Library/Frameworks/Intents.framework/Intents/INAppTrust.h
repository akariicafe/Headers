@interface INAppTrust : NSObject

+ (BOOL)_appRequiresExplicitTrust:(id)a0 withExplicitAppTrustCache:(id)a1;
+ (BOOL)_shouldTrustAppForLaunch:(id)a0 withExplicitAppTrustCache:(id)a1;
+ (BOOL)_shouldTrustExtensionForLaunch:(id)a0 withExplicitAppTrustCache:(id)a1;
+ (id)appsTrustedForLaunch:(id)a0;
+ (id)extensionsTrustedForLaunch:(id)a0;
+ (BOOL)shouldTrustAppForLaunch:(id)a0;
+ (BOOL)shouldTrustExtensionForLaunch:(id)a0;

@end
