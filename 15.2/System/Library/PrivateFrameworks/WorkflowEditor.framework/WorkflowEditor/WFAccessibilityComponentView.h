@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView

@property (retain, nonatomic, setter=ck_setComponent:) WFAccessibilityActionComponent *ck_component;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityAttributedValue;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)_ck_accessibilityTarget;

@end
