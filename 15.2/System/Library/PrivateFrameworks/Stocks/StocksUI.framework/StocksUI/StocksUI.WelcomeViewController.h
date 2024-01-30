@interface StocksUI.WelcomeViewController : UIViewController {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ viewAnimator;
    void /* unknown type, empty encoding */ privacyLinkController;
    void /* unknown type, empty encoding */ allowRendering;
    void /* unknown type, empty encoding */ statusBarView;
    void /* unknown type, empty encoding */ toolbarManager;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)didTapContinueButton;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
