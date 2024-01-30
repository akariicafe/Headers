@class NSString, UIWindow, NSXPCListener;

@interface _EXRunningUISceneExtension : _EXRunningUIExtension <UIApplicationDelegate, NSXPCListenerDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSXPCListener *internalListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (id)init;
- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;
- (void).cxx_destruct;

@end
