@class UISwitch, PKTransitBalanceModel, UILabel, UIView, NSLayoutConstraint, NSString, PKPaymentPass, PKPassSnapshotter, UIActivityIndicatorView, UIStackView, UIColor, NSArray, UIImageView;
@protocol PKPaymentPreferenceCardCellAccessoryViewDelegate;

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell {
    BOOL _isRightToLeft;
    BOOL _editing;
    UIActivityIndicatorView *_activityIndicator;
    UIStackView *_labelStackView;
    UIView *_accessoryView;
    UIColor *_subTextLabelColorOverride;
    NSLayoutConstraint *_labelStackTrailingAnchorToCell;
    NSArray *_accessoryStackConstraints;
}

@property (weak, nonatomic) id<PKPaymentPreferenceCardCellAccessoryViewDelegate> delegate;
@property (nonatomic) long long accessoryViewType;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPassSnapshotter *passSnapshotter;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (retain, nonatomic) UIColor *mainLabelColor;
@property (retain, nonatomic) UIColor *subTextLabelColor;
@property (retain, nonatomic) UIColor *disabledMainLabelColor;
@property (retain, nonatomic) UIColor *disabledSubTextLabelColor;
@property (retain, nonatomic) UIColor *activityIndicatorColor;
@property (readonly, nonatomic) UILabel *displayLabel;
@property (readonly, nonatomic) UILabel *censoredPANLabel;
@property (readonly, nonatomic) UIImageView *cardArtView;
@property (readonly, nonatomic) UISwitch *actionSwitch;
@property (copy, nonatomic) NSString *availabilityString;
@property (copy, nonatomic) NSString *subTextOverrideString;
@property (nonatomic) BOOL showBillingAddress;
@property (nonatomic) BOOL dimCardArt;
@property (nonatomic, getter=isActivityIndicatorActive) BOOL activityIndicatorActive;

+ (double)textOffset;

- (void)_updateAccessoryView;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)pk_applyAppearance:(id)a0;
- (void)setHasError:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (void)_setupConstraints;
- (void)_performSwitchToggle:(id)a0;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)_updateLabelTextColors;
- (id)initWithReuseIdentifier:(id)a0;

@end
