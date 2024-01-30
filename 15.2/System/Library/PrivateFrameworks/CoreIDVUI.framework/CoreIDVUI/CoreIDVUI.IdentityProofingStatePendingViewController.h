@interface CoreIDVUI.IdentityProofingStatePendingViewController : CoreIDVUI.IdentityProofingBaseViewController {
    void /* unknown type, empty encoding */ primaryButtonClickedAction;
    void /* unknown type, empty encoding */ secondaryButtonClickedAction;
    void /* unknown type, empty encoding */ tertiaryButtonClickedAction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tertiaryButton;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageViewContainer;
}

- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)secondaryButtonClicked;
- (void)primaryButtonClicked;
- (void)tertiaryButtonClicked;

@end
