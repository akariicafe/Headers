@interface SwiftUI.AppDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ fallbackDelegate;
    void /* unknown type, empty encoding */ mainMenuController;
    void /* unknown type, empty encoding */ appNavigationAuthority;
}

- (void)buildMenuWithBuilder:(id)a0;
- (void)validateCommand:(id)a0;
- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_performMainMenuShortcutKeyCommand:(id)a0;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;

@end
