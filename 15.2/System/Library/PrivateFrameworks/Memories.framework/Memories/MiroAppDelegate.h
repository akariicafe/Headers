@class NSString, UIWindow;

@interface MiroAppDelegate : UIResponder <UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)a0;

@end
