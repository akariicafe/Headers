@interface CoreIDVUI.IdentityProofingExtendedReviewViewController : UIViewController {
    void /* unknown type, empty encoding */ shouldHideBackButton;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ primaryLabelText;
    void /* unknown type, empty encoding */ secondaryLabelText;
    void /* unknown type, empty encoding */ tertiaryLabelText;
    void /* unknown type, empty encoding */ primaryButtonTitle;
    void /* unknown type, empty encoding */ secondaryButtonTitle;
    void /* unknown type, empty encoding */ issuerUrlString;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ isCancelling;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tertiaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;

@end
