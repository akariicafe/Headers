@interface TeaUI.MenuManager : UIResponder {
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ menuItems;
    void /* unknown type, empty encoding */ alternateMenuItems;
    void /* unknown type, empty encoding */ stagedMenuActions;
    void /* unknown type, empty encoding */ stagedAlternateMenuActions;
}

- (void)handleShareCommandWithSender:(id)a0;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handleMenuCommandWithSender:(id)a0;
- (void)handleAlternateMenuCommandWithSender:(id)a0;

@end
