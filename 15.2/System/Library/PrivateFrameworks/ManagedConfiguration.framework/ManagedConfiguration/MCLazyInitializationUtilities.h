@interface MCLazyInitializationUtilities : NSObject

+ (void)initDAEAS;
+ (void)initCoreGraphics;
+ (void)initImageIO;
+ (void)initAuthKit;
+ (void)loadBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initPowerlogControl;
+ (void)initCoreText;
+ (void)loadNSBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initExchangeSyncExpress;
+ (void)initMobileActivation;
+ (void)initLoggingSupport;
+ (void)initSetupAssistant;
+ (void)initSpringBoardServices;
+ (void)initUserManagement;
+ (void)initAppleIDSSOAuthentication;

@end
