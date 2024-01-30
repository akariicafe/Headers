@class UIColor, NSString, UIImageView, UIImage, UILabel, NSAttributedString, CNAvatarView;

@interface PKPaymentTransactionView : UIView {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_rewardsAmountLabel;
    UILabel *_transactionValueLabel;
    UIImageView *_primaryImageView;
    UIImageView *_disclosureView;
    BOOL _isTemplateLayout;
}

@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) NSString *primaryString;
@property (retain, nonatomic) NSString *secondaryString;
@property (retain, nonatomic) NSString *tertiaryString;
@property (retain, nonatomic) NSAttributedString *transactionValueAttributedText;
@property (retain, nonatomic) NSString *rewardsValueString;
@property (nonatomic) BOOL hideRewardsBackground;
@property (nonatomic) BOOL showsAvatarView;
@property (nonatomic) BOOL showsDisclosureView;
@property (nonatomic) BOOL allowPrimaryStringExpansion;
@property (retain, nonatomic) UIImage *primaryImage;
@property (nonatomic) BOOL strokeImage;
@property (readonly, nonatomic) CNAvatarView *avatarView;

+ (id)defaultTertiaryLabelFont;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateAvatarView;
- (id)_disclosureView;
- (void)createSubviews;
- (void)setPrimaryImage:(id)a0 animated:(BOOL)a1;
- (void)setTransactionValueAttributedText:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetFonts;
- (void)_updateImageViewDynamicColors;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (BOOL)_shouldUseStackedLayout;
- (double)_defaultLayoutHeight;
- (void)_updatePrimaryLabelString;
- (id)transactionValueAttributedText;
- (BOOL)shouldShowTransactionPreviewForTouchAtPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;

@end
