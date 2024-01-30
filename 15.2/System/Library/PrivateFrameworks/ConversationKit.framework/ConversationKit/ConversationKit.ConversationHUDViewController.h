@interface ConversationKit.ConversationHUDViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ ephemeralAlertCancellable;
    void /* unknown type, empty encoding */ appLaunchButtonCancellable;
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ presentationSize;
    void /* unknown type, empty encoding */ shadowProperties;
    void /* unknown type, empty encoding */ expanded;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaterialView;
    void /* unknown type, empty encoding */ controlsView;
    void /* unknown type, empty encoding */ detailsViewController;
    void /* unknown type, empty encoding */ menuContainerView;
    void /* unknown type, empty encoding */ appLaunchButton;
    void /* unknown type, empty encoding */ collapsedBottomLayoutConstraint;
    void /* unknown type, empty encoding */ expandedBottomLayoutConstraint;
    void /* unknown type, empty encoding */ detailsHeightLayoutConstraint;
    void /* unknown type, empty encoding */ detailsWidthLayoutConstraint;
}

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)showDetailsController:(id)a0;
- (void)appLaunchButtonTapped:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
