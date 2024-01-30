@interface SUClientDispatch : NSObject

+ (id)clientInterface;
+ (id)imageCache;
+ (id)tabBarController;
+ (id)scriptExecutionContext;
+ (id)overlayBackgroundViewController;
+ (BOOL)presentOverlayBackgroundViewController:(id)a0;
+ (void)dismissOverlayBackgroundViewController;
+ (void)composeEmailWithSubject:(id)a0 body:(id)a1;
+ (BOOL)isTabBarControllerLoaded;
+ (id)exitStoreButtonTitle;
+ (BOOL)matchesClientApplication:(id)a0;
+ (id)overlayConfigurationForStorePage:(id)a0;
+ (BOOL)enterAccountFlowWithViewController:(id)a0 animated:(BOOL)a1;
+ (id)imagePool;
+ (id)newScriptInterface;
+ (BOOL)sendActionForDialog:(id)a0 button:(id)a1;
+ (BOOL)composeReviewWithViewController:(id)a0 animated:(BOOL)a1;
+ (BOOL)wasLaunchedFromLibrary;
+ (BOOL)hidePreviewOverlayAnimated:(BOOL)a0;
+ (id)previewOverlayViewController;
+ (BOOL)showPreviewOverlayAnimated:(BOOL)a0;
+ (void)setClientBridge:(id)a0;

@end
