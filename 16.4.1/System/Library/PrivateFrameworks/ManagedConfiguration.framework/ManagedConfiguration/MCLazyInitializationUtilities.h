@interface MCLazyInitializationUtilities : NSObject

+ (void)initAppleIDSSOAuthentication;
+ (void)initAuthKit;
+ (void)initCoreGraphics;
+ (void)initCoreText;
+ (void)initDAEAS;
+ (void)initExchangeSyncExpress;
+ (void)initImageIO;
+ (void)initLoggingSupport;
+ (void)initMessage;
+ (void)initMobileActivation;
+ (void)initPowerlogControl;
+ (void)initSetupAssistant;
+ (void)initSpringBoardServices;
+ (void)initUserManagement;
+ (void)loadBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)loadNSBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;

@end
