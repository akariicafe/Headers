@class UILabel, UIVisualEffectView, HUIStepSlider;

@interface HUITitleValueSlider : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;

- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (id)initWithEffect:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;

@end
