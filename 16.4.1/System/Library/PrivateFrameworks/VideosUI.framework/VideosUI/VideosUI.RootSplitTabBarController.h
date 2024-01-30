@interface VideosUI.RootSplitTabBarController : UITabBarController <UITabBarControllerDelegate> {
    void /* unknown type, empty encoding */ splitDelegate;
    void /* unknown type, empty encoding */ trackModeSwitchOnParentMoveEvents;
    void /* unknown type, empty encoding */ listenForAppear;
    void /* unknown type, empty encoding */ listenForDissapear;
}

- (BOOL)tabBarController:(id)a0 shouldSelectViewController:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
