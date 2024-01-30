@interface SwiftUI.AppSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    void /* unknown type, empty encoding */ sceneItemID;
    void /* unknown type, empty encoding */ lastVersion;
    void /* unknown type, empty encoding */ sceneBridge;
    void /* unknown type, empty encoding */ scenePhase;
    void /* unknown type, empty encoding */ sceneDelegateBox;
    void /* unknown type, empty encoding */ sceneStorageValues;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;

- (void)sceneDidDisconnect:(id)a0;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)stateRestorationActivityForScene:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)sceneDidBecomeActive:(id)a0;

@end
