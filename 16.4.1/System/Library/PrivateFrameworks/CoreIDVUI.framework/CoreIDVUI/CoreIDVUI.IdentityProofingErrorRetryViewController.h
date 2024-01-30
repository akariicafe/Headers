@interface CoreIDVUI.IdentityProofingErrorRetryViewController : UIViewController {
    void /* unknown type, empty encoding */ viewConfig;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ primaryButtonTargetAction;
    void /* unknown type, empty encoding */ secondaryButtonTargetAction;
    void /* unknown type, empty encoding */ bodyButtonTargetAction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyButton;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)bodyButtonClicked;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;

@end
