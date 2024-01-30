@interface CoreIDVUI.IdentityProofingPasscodeEntryViewController : UIViewController {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ orangeTint;
    void /* unknown type, empty encoding */ grayTint;
    void /* unknown type, empty encoding */ whiteTint;
    void /* unknown type, empty encoding */ lighterGrayTint;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ subtitleText;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ placeHolder;
    void /* unknown type, empty encoding */ minLength;
    void /* unknown type, empty encoding */ maxLength;
    void /* unknown type, empty encoding */ identityProofingCardArtResolutionHelper;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ secondaryStackView;
    void /* unknown type, empty encoding */ primaryStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageViewContainer;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFieldView;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ addButton;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismissKeyboard;
- (void)cancelButtonClicked;
- (void)keyboardDidShowWithNotification:(id)a0;
- (void)keyboardDidHideWithNotification:(id)a0;
- (void)addButtonClicked;

@end
