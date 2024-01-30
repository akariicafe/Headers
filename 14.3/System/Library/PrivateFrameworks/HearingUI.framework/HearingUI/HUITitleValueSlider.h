@class UILabel, UIVisualEffectView, HUIStepSlider;

@interface HUITitleValueSlider : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (id)initWithEffect:(id)a0;

@end
