@class UIColor, NSString, UIImageView, UIImage, UILabel, NSAttributedString, CNAvatarView;

@interface PKPaymentTransactionView : UIView {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UILabel *_badgeLabel;
    UILabel *_transactionValueLabel;
    UIImageView *_primaryImageView;
    UIImageView *_disclosureView;
    UIImageView *_bonusImageView;
    BOOL _isTemplateLayout;
}

@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) NSString *primaryString;
@property (retain, nonatomic) NSString *secondaryString;
@property (retain, nonatomic) NSString *tertiaryString;
@property (retain, nonatomic) NSAttributedString *transactionValueAttributedText;
@property (retain, nonatomic) NSString *badgeString;
@property (nonatomic) BOOL hideBadgeBackground;
@property (nonatomic) BOOL showsAvatarView;
@property (nonatomic) BOOL showsDisclosureView;
@property (nonatomic) BOOL showsBonusImage;
@property (nonatomic) BOOL allowPrimaryStringExpansion;
@property (retain, nonatomic) UIImage *primaryImage;
@property (nonatomic) BOOL strokeImage;
@property (readonly, nonatomic) CNAvatarView *avatarView;

+ (id)defaultTertiaryLabelFont;

- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_disclosureView;
- (void)_updateAvatarView;
- (double)_defaultLayoutHeight;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldUseStackedLayout;
- (void)_updateImageViewDynamicColors;
- (void)_updatePrimaryLabelString;
- (void)createSubviews;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (void)resetFonts;
- (void)setPrimaryImage:(id)a0 animated:(BOOL)a1;
- (void)setTransactionValueAttributedText:(id)a0;
- (BOOL)shouldShowTransactionPreviewForTouchAtPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)transactionValueAttributedText;

@end
