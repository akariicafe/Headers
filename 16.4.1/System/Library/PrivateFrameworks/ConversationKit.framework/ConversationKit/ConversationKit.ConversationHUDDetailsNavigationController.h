@interface ConversationKit.ConversationHUDDetailsNavigationController : UINavigationController <CNKSceneVisibilityHandler> {
    void /* unknown type, empty encoding */ detailsDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ shouldHaveBackgroundMaterial;
    void /* unknown type, empty encoding */ detailsViewController;
}

@property (nonatomic) BOOL isOnScreen;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (void)tapDoneButton;

@end
