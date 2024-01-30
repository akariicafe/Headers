@interface ConversationKit.ConversationHUDViewController : UIViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ ephemeralAlertCancellable;
    void /* unknown type, empty encoding */ appLaunchButtonCancellable;
    void /* unknown type, empty encoding */ shadowProperties;
    void /* unknown type, empty encoding */ contentAlpha;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaterialView;
    void /* unknown type, empty encoding */ controlsView;
    void /* unknown type, empty encoding */ menuContainerView;
    void /* unknown type, empty encoding */ appLaunchPillView;
    void /* unknown type, empty encoding */ detailsHeightLayoutConstraint;
    void /* unknown type, empty encoding */ detailsWidthLayoutConstraint;
    void /* unknown type, empty encoding */ shareCardViewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ presentationSize;
}

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)appLaunchButtonTapped:(id)a0;
- (void)showCallDetailsButtonTapped;
- (void)statusViewTapped;

@end
