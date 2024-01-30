@class UIWindow, NSString, FBSOrientationObserver, NSObject;
@protocol OS_os_log;

@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate> {
    FBSOrientationObserver *_orientationObserver;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *loggingFacility;
@property (class, readonly, nonatomic) NSString *debugFeatureName;
@property (class, readonly, nonatomic) BOOL isFeatureEnabled;
@property (class, readonly, nonatomic) NSString *featureEnabledStatusDidChangeNotification;

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillTerminate:(id)a0;
- (void)willTerminate;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)setKeepAlive:(BOOL)a0;
- (void)didFinishLaunching;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_didUpdateToOrientation:(long long)a0 duration:(double)a1;
- (void)_enabledPreferenceDidChange:(id)a0;
- (void)_exitIfNotEnabled;
- (void)_systemAppDidBecomeReady;
- (void)didUpdateOrientation;

@end
