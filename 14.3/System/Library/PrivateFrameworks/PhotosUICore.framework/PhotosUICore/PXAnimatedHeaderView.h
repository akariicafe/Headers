@class UIFont, PXAnimatedLabel, CAGradientLayer, NSString;

@interface PXAnimatedHeaderView : UIView

@property (retain) PXAnimatedLabel *currentLabel;
@property (retain) PXAnimatedLabel *sizingLabel;
@property (retain) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_labelWithText:(id)a0;
- (void)setText:(id)a0 withAnimationStyle:(long long)a1;
- (void)setText:(id)a0 withAnimationStyle:(long long)a1 spinDigits:(BOOL)a2;
- (BOOL)_requiresLabelSwitchForNewText:(id)a0;
- (BOOL)_requiresDigitAnimationForNewText:(id)a0;
- (void)_updateSizingWithText:(id)a0;
- (void)_animateLabelSwitchFromLabel:(id)a0 toLabel:(id)a1 andAnimationStyle:(long long)a2 completionBlock:(id /* block */)a3;

@end
