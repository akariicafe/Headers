@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (struct CGSize { double x0; double x1; })screenSize;
- (double)screenScale;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)overrideBlurStyle;
- (BOOL)supportsAlwaysOnCompass;
- (BOOL)openURL:(id)a0;
- (BOOL)reduceMotionEnabled;
- (int)userInterfaceIdiom;
- (void)openURL:(id)a0 fromScene:(id)a1 completionHandler:(id /* block */)a2;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)supports3DImagery;
- (BOOL)isInternalInstall;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)_isRunningInLockScreen;
- (id)_defaultOpenURLOptions;
- (BOOL)_shouldUseLaunchServices;
- (BOOL)isHiDPI;
- (BOOL)requiresRTT;
- (BOOL)isPhone6PlusOrLarger;
- (BOOL)isDevicePluggedIn;
- (BOOL)_isInSpotlight;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isWifiEnabled;
- (BOOL)supportsPitchAPI;
- (BOOL)supports3DMaps;
- (void)openURL:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
