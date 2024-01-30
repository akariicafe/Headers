@interface SwiftUI.AppDelegate : UIResponder <UIApplicationDelegate> {
    void /* unknown type, empty encoding */ appDelegate;
    void /* unknown type, empty encoding */ mainMenuController;
}

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_performMainMenuShortcutKeyCommand:(id)a0;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)validateCommand:(id)a0;
- (id)application:(id)a0 configurationForConnectingSceneSession:(id)a1 options:(id)a2;

@end
