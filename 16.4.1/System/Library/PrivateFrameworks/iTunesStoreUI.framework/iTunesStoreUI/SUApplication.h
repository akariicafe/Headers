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

- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)_applicationDidFinishLaunching:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)dealloc;
- (id)init;
- (void)applicationWillEnterForeground:(id)a0;
- (BOOL)applicationSuspendWithSettings:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (unsigned long long)application:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;
- (double)defaultImageSnapshotExpiration;
- (void)_setupUI;
- (void)_exitForStoreNotAvailable;
- (void)_exitIfStoreNotAvailable;
- (void)_runScriptTestWithOptions:(id)a0;
- (void)_storeEnabledChangeNotification:(id)a0;
- (void)_teardownUI;
- (void)runTestInvocation:(id)a0;

@end
