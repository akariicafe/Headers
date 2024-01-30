@interface MCLazyInitializationUtilities : NSObject

+ (void)initCoreText;
+ (void)initAuthKit;
+ (void)loadBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initPowerlogControl;
+ (void)initDAEAS;
+ (void)initCoreGraphics;
+ (void)initLoggingSupport;
+ (void)initAppleIDSSOAuthentication;
+ (void)initSpringBoardServices;
+ (void)initExchangeSyncExpress;
+ (void)loadNSBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initUserManagement;
+ (void)initImageIO;
+ (void)initSetupAssistant;

@end
