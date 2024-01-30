@interface NewsUI2.EmailSignupViewController : UIViewController {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ obController;
    void /* unknown type, empty encoding */ micaView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ contentViewHeightConstraint;
    void /* unknown type, empty encoding */ signupButton;
    void /* unknown type, empty encoding */ notNowButton;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)notNow;
- (void)signup;

@end
