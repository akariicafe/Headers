@interface MagnifierSupport.SceneDelegate : UIResponder <UIWindowSceneDelegate>

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;

- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidBecomeActive:(id)a0;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;
- (void)updateAppearanceForReduceTransparency:(id)a0;

@end
