@class UILabel, UIImageView;

@interface CoreIDVUI.IdentityProofingViewController : UIViewController {
    void /* unknown type, empty encoding */ primaryButtonTargetAction;
    void /* unknown type, empty encoding */ secondaryButtonTargetAction;
    void /* unknown type, empty encoding */ cancelButtonTargetAction;
    void /* unknown type, empty encoding */ tertiaryButtonTargetAction;
    void /* unknown type, empty encoding */ primaryButtonHeight;
    void /* unknown type, empty encoding */ secondaryButtonHeight;
    void /* unknown type, empty encoding */ secondaryButtonDefaultFontSize;
    void /* unknown type, empty encoding */ tertiaryButtonHeight;
    void /* unknown type, empty encoding */ tertiaryButtonDefaultFontSize;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ textContainerStackViewSpacing;
    void /* unknown type, empty encoding */ botomTraySpacing;
    void /* unknown type, empty encoding */ headerViewDefaultHeightMultiplier;
    void /* unknown type, empty encoding */ orangeTint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomTray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textContainerStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tertiaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerCaption;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
}

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIImageView *imageView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancelButtonClicked;
- (void)secondaryButtonClicked;
- (void)primaryButtonClicked;
- (void)tertiaryButtonClicked;

@end
