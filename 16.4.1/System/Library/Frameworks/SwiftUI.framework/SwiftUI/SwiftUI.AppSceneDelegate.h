@interface SwiftUI.AppSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_appDelegate;
    void /* unknown type, empty encoding */ sceneItemID;
    void /* unknown type, empty encoding */ lastVersion;
    void /* unknown type, empty encoding */ sceneBridge;
    void /* unknown type, empty encoding */ scenePhase;
    void /* unknown type, empty encoding */ sceneDelegateBox;
    void /* unknown type, empty encoding */ sceneStorageValues;
    void /* unknown type, empty encoding */ presentedID;
    void /* unknown type, empty encoding */ presentationDataType;
    void /* unknown type, empty encoding */ presentationDataValue;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ window;

- (id)stateRestorationActivityForScene:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidBecomeActive:(id)a0;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)sceneWillEnterForeground:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (id)init;
- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;

@end
