@interface SeymourUI.BurnBarPrivacyPromptAlertViewController : UIViewController {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ burnbarOnButton;
    void /* unknown type, empty encoding */ burnbarOffButton;
    void /* unknown type, empty encoding */ burnBar;
    void /* unknown type, empty encoding */ burnBarEnabledBlock;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)burnbarOnButtonTapped;
- (void)burnbarOffButtonTapped;

@end
