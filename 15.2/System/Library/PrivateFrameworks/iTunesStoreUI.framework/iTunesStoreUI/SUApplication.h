@class UIColor, UIWindow, NSString;

@interface SUApplication : UIApplication <UIApplicationDelegate> {
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
}

@property (copy, nonatomic) UIColor *interactionTintColor;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)applicationDidFinishLaunching:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (id)init;
- (BOOL)applicationSuspendWithSettings:(id)a0;
- (double)defaultImageSnapshotExpiration;
- (void)dealloc;
- (void)_setupUI;
- (void)_applicationDidFinishLaunching:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (unsigned long long)application:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;
- (void)_storeEnabledChangeNotification:(id)a0;
- (void)_teardownUI;
- (void)_exitIfStoreNotAvailable;
- (void)_exitForStoreNotAvailable;
- (void)_runScriptTestWithOptions:(id)a0;
- (void)runTestInvocation:(id)a0;

@end
