@class UILabel, PKPassFaceViewRendererState, PKPassView, CALayer, UIImageView, UIControl, PKPaymentApplication, PKPaymentPass, UIActivityIndicatorView;
@protocol PKPaymentPassTableCellDelegate;

@interface PKPaymentPassTableCell : PSTableCell {
    PKPaymentApplication *_paymentApplication;
    long long _settingsContext;
    unsigned int _snapshotCounter;
    UIActivityIndicatorView *_snapshotSpinner;
    PKPassView *_passView;
    UIImageView *_cardSnapshotView;
    CALayer *_cardSnapshotMask;
    UIActivityIndicatorView *_spinner;
    BOOL _showState;
}

@property (readonly, retain, nonatomic) PKPaymentPass *pass;
@property (nonatomic) BOOL showSubTitle;
@property (nonatomic) BOOL showAddButton;
@property (weak, nonatomic) id<PKPaymentPassTableCellDelegate> delegate;
@property (readonly, nonatomic) UILabel *mainLabel;
@property (readonly, nonatomic) UILabel *subTextLabel;
@property (readonly, nonatomic) UIControl *actionButton;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;

+ (id)titleFont;
+ (double)heightForCellWithMinimum:(double)a0 hasSubTitle:(BOOL)a1;
+ (id)subTitleFont;

- (void)setSpecifier:(id)a0;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)updateSubtitle;
- (void)dealloc;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (void)updateSubtitleForTransitProperties;
- (void)layoutSubviews;
- (void)_addButtonPressed:(id)a0;
- (void)showActivitySpinner:(BOOL)a0;
- (void)_updateSubtitleColorWithSpecifier:(id)a0;
- (id)_stringForPassState:(unsigned long long)a0;
- (void)_verifyButtonPressed:(id)a0;
- (void)setPass:(id)a0 passView:(id)a1;
- (void)disableAddButton;

@end
