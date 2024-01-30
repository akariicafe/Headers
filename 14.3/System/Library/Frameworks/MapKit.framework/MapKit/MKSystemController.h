@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isInternalInstall;
- (int)userInterfaceIdiom;
- (struct CGSize { double x0; double x1; })screenSize;
- (BOOL)supports3DMaps;
- (void)openURL:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)supportsAlwaysOnCompass;
- (void).cxx_destruct;
- (BOOL)_shouldUseLaunchServices;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (double)screenScale;
- (BOOL)overrideBlurStyle;
- (BOOL)reduceMotionEnabled;
- (BOOL)_openURLsOnBackgroundThread;
- (void)openURL:(id)a0 fromScene:(id)a1 completionHandler:(id /* block */)a2;
- (id)_transformURLIfNecessary:(id)a0;
- (BOOL)openURL:(id)a0;
- (id)_defaultOpenURLOptions;
- (void)openUserActivity:(id)a0 withApplicationProxy:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)supportsPitchAPI;
- (BOOL)requiresRTT;
- (BOOL)isHiDPI;
- (BOOL)isWifiEnabled;
- (BOOL)supports3DImagery;
- (BOOL)isPhone6PlusOrLarger;
- (BOOL)_isRunningInLockScreen;
- (BOOL)isDevicePluggedIn;
- (BOOL)shouldCaptureMapViewGestureAnalytics;

@end
