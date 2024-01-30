@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (double)screenScale;
- (BOOL)reduceMotionEnabled;
- (BOOL)isInternalInstall;
- (BOOL)supports3DImagery;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (int)userInterfaceIdiom;
- (void)openURL:(id)a0 fromScene:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isRunningInLockScreen;
- (BOOL)openURL:(id)a0;
- (BOOL)isHiDPI;
- (BOOL)requiresRTT;
- (id)_transformURLIfNecessary:(id)a0;
- (BOOL)isDevicePluggedIn;
- (BOOL)supportsAlwaysOnCompass;
- (void)openURL:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isWifiEnabled;
- (void).cxx_destruct;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (id)_defaultOpenURLOptions;
- (BOOL)overrideBlurStyle;
- (struct CGSize { double x0; double x1; })screenSize;
- (BOOL)_shouldUseLaunchServices;
- (BOOL)_isInSpotlight;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isPhone6PlusOrLarger;
- (BOOL)supports3DMaps;
- (BOOL)supportsPitchAPI;

@end
