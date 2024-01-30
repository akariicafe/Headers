@interface SwiftUI.AppDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ fallbackDelegate;
    void /* unknown type, empty encoding */ mainMenuController;
    void /* unknown type, empty encoding */ appNavigationV3Authority;
}

- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)application:(id)a0 handleEventsForBackgroundURLSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)validateCommand:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_performMainMenuShortcutKeyCommand:(id)a0;
- (id)init;
- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;
- (void)buildMenuWithBuilder:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
