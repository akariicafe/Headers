@class UIColor, UIFont, UIImage, UIView, NSAttributedString, PKIconTextLabel;

@interface PKTitleDetailValueTextView : UIView {
    PKIconTextLabel *_primaryLabel;
    PKIconTextLabel *_secondaryLabel;
    PKIconTextLabel *_tertiaryLabel;
    PKIconTextLabel *_amountLabel;
    UIView *_accessoryView;
}

@property (copy, nonatomic) NSAttributedString *primaryText;
@property (copy, nonatomic) NSAttributedString *secondaryText;
@property (copy, nonatomic) NSAttributedString *tertiaryText;
@property (copy, nonatomic) NSAttributedString *amountText;
@property (nonatomic) unsigned long long accessory;
@property (nonatomic) BOOL centerPrimaryText;
@property (nonatomic) double labelPadding;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *tertiaryTextColor;
@property (retain, nonatomic) UIColor *amountTextColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (retain, nonatomic) UIFont *tertiaryFont;
@property (retain, nonatomic) UIFont *amountFont;
@property (retain, nonatomic) UIImage *primaryIcon;
@property (retain, nonatomic) UIImage *secondaryIcon;
@property (retain, nonatomic) UIImage *tertiaryIcon;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_useDefaultFont;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
