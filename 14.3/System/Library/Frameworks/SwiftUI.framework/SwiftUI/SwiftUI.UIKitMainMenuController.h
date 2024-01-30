@interface SwiftUI.UIKitMainMenuController : UIResponder {
    void /* unknown type, empty encoding */ commandResolver;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ topLevelItemCoordinators;
    void /* unknown type, empty encoding */ keyCommandMap;
}

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_performMainMenuShortcutKeyCommand:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)buildMenuWithBuilder:(id)a0;

@end
