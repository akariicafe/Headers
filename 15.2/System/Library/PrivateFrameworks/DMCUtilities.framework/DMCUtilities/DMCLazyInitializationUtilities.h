@interface DMCLazyInitializationUtilities : NSObject

+ (void)initAuthKit;
+ (void)loadBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)loadNSBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initMobileActivation;
+ (void)initSetupAssistant;
+ (void)initSpringBoardServices;
+ (void)initUserManagement;
+ (void)initAppleIDSSOAuthentication;

@end
