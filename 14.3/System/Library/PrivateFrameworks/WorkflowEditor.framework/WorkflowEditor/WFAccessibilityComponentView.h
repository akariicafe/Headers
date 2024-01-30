@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView

@property (retain, nonatomic, setter=ck_setComponent:) WFAccessibilityActionComponent *ck_component;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityAttributedValue;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (id)_ck_accessibilityTarget;

@end
