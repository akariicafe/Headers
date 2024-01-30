@interface SUClientDispatch : NSObject

+ (id)clientInterface;
+ (id)imageCache;
+ (id)tabBarController;
+ (id)overlayBackgroundViewController;
+ (void)composeEmailWithSubject:(id)a0 body:(id)a1;
+ (BOOL)composeReviewWithViewController:(id)a0 animated:(BOOL)a1;
+ (void)dismissOverlayBackgroundViewController;
+ (BOOL)enterAccountFlowWithViewController:(id)a0 animated:(BOOL)a1;
+ (id)exitStoreButtonTitle;
+ (BOOL)hidePreviewOverlayAnimated:(BOOL)a0;
+ (id)imagePool;
+ (BOOL)isTabBarControllerLoaded;
+ (BOOL)matchesClientApplication:(id)a0;
+ (id)newScriptInterface;
+ (id)overlayConfigurationForStorePage:(id)a0;
+ (BOOL)presentOverlayBackgroundViewController:(id)a0;
+ (id)previewOverlayViewController;
+ (id)scriptExecutionContext;
+ (BOOL)sendActionForDialog:(id)a0 button:(id)a1;
+ (void)setClientBridge:(id)a0;
+ (BOOL)showPreviewOverlayAnimated:(BOOL)a0;
+ (BOOL)wasLaunchedFromLibrary;

@end
