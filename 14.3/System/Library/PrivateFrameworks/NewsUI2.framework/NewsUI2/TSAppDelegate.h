@interface TSAppDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolverManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolvers;
    void /* unknown type, empty encoding */ swiftSingletonPool;
    void /* unknown type, empty encoding */ objcSingletonPool;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commandCenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)validateCommand:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (void)application:(id)a0 handleIntent:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (void)application:(id)a0 didReceiveRemoteNotification:(id)a1 fetchCompletionHandler:(id /* block */)a2;
- (void)application:(id)a0 performFetchWithCompletionHandler:(id /* block */)a1;
- (id)createSceneResolver;
- (id)createCarPlaySceneResolver;
- (id)createBridgedAppResolver;
- (id)init;
- (void).cxx_destruct;
- (void)bootstrapWithApplication:(id)a0;

@end
