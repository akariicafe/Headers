@interface SeymourUI.SessionPromptAlertViewController : UIViewController {
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ subtitleText;
    void /* unknown type, empty encoding */ primaryActionTitle;
    void /* unknown type, empty encoding */ secondaryActionTitle;
    void /* unknown type, empty encoding */ featureView;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ actionResultBlock;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ primaryPhoneButton;
    void /* unknown type, empty encoding */ secondaryPhoneButton;
    void /* unknown type, empty encoding */ primaryTVButton;
    void /* unknown type, empty encoding */ secondaryTVButton;
    void /* unknown type, empty encoding */ styleProvider;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)burnbarOffButtonTapped;
- (void)burnbarOnButtonTapped;

@end
