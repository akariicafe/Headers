@class UIColor, UIFont, PKTitleDetailValueTextView, PKConnectedCircleView, NSAttributedString, PKGradientVerticalConnector;

@interface PKConnectedCollectionViewCell : UICollectionViewListCell {
    PKTitleDetailValueTextView *_textView;
    PKConnectedCircleView *_circleView;
    UIColor *_backgroundColor;
}

@property (copy, nonatomic) NSAttributedString *primaryText;
@property (copy, nonatomic) NSAttributedString *secondaryText;
@property (copy, nonatomic) NSAttributedString *tertiaryText;
@property (copy, nonatomic) NSAttributedString *amountText;
@property (nonatomic) BOOL showChevron;
@property (nonatomic) BOOL centerPrimaryText;
@property (nonatomic) double minimumHeight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) UIColor *tertiaryTextColor;
@property (retain, nonatomic) UIColor *amountTextColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (retain, nonatomic) UIFont *amountFont;
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector;
@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector;
@property (nonatomic) unsigned long long targetType;

+ (double)textInsetWithOuterRadius:(double)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
