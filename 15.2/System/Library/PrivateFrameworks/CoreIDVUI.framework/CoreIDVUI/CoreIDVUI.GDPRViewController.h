@interface CoreIDVUI.GDPRViewController : UIViewController {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ identityProofingCardArtResolutionHelper;
    void /* unknown type, empty encoding */ navBarDefaultColor;
    void /* unknown type, empty encoding */ requireHSA2ForProofing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)secondaryButtonClicked;
- (void)primaryButtonClicked;

@end
