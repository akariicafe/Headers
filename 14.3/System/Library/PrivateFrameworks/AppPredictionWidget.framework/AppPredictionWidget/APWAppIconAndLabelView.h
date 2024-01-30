@class UIButton, NSString, UIView, UILabel, UITraitCollection;

@interface APWAppIconAndLabelView : UIControl {
    UIButton *_iconButton;
    UILabel *_label;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) UIView *iconView;
@property (readonly, nonatomic) UITraitCollection *iconLabelTraitCollection;

+ (void)_applyKerning:(double)a0 whitespaceKerning:(double)a1 toAttributedString:(id)a2;
+ (id)labelFontForTraitCollection:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForTraitCollection:(id)a0;
+ (double)fontSizeForTraitCollection:(id)a0;
+ (double)heightToLabelBaselineForTraitCollection:(id)a0;
+ (id)_attributedStringForAppName:(id)a0 font:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 minimumLetterSpacing:(double)a3;
+ (double)baselineOffsetMultipleForTraitCollection:(id)a0;
+ (double)caption2BodyLeadingForTraitCollection:(id)a0;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)_iconButtonTapped:(id)a0;
- (id)initWithTraitCollection:(id)a0;
- (id)_iconButtonView;

@end
