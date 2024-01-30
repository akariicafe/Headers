@class UILabel, UIVisualEffectView, HUIStepSlider;

@interface HUITitleValueSlider : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)initWithEffect:(id)a0;

@end
