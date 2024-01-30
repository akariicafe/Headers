@class UIActivityIndicatorView, PKPassFaceViewRendererState, NSString, PKPassView, CALayer, UIImageView, UIControl, PKPaymentVerificationController, PKPaymentApplication, UIViewController, PKPaymentPass, UILabel;
@protocol PKPaymentPassTableCellDelegate;

@interface PKPaymentPassTableCell : PSTableCell <PKPaymentVerificationControllerDelegate> {
    PKPaymentApplication *_paymentApplication;
    long long _settingsContext;
    unsigned int _snapshotCounter;
    UIActivityIndicatorView *_snapshotSpinner;
    PKPassView *_passView;
    UIImageView *_cardSnapshotView;
    CALayer *_cardSnapshotMask;
    UIActivityIndicatorView *_spinner;
    BOOL _showState;
    PKPaymentVerificationController *_verificationController;
    UIViewController *_verificationViewController;
    BOOL _showActionButton;
    BOOL _showSpinner;
    BOOL _showSnapshotSpinner;
}

@property (readonly, retain, nonatomic) PKPaymentPass *pass;
@property (nonatomic) BOOL showSubTitle;
@property (nonatomic) BOOL showAddButton;
@property (weak, nonatomic) id<PKPaymentPassTableCellDelegate> delegate;
@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *subTextLabel;
@property (readonly, nonatomic) UIControl *actionButton;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleFont;
+ (id)subTitleFont;
+ (double)heightForCellWithMinimum:(double)a0 hasSubTitle:(BOOL)a1;

- (void)updateSubtitle;
- (void)setSpecifier:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)presentationContext;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_addButtonPressed:(id)a0;
- (void)_configureActionButtonWithTitle:(id)a0;
- (void)_configureCellWithSpecifier:(id)a0;
- (void)_configureMainLabelWithText:(id)a0;
- (void)_configureSubTextLabelWithText:(id)a0 textColor:(id)a1;
- (id)_stringForPassState:(unsigned long long)a0;
- (void)_verifyButtonPressed:(id)a0;
- (void)didChangeVerificationPresentation;
- (void)disableAddButton;
- (void)dismissVerificationViewControllerAnimated:(BOOL)a0;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)presentVerificationViewController:(id)a0 animated:(BOOL)a1;
- (void)setPass:(id)a0 passView:(id)a1;
- (void)showActivitySpinner:(BOOL)a0;
- (void)updateSubtitleForTransitProperties;

@end
