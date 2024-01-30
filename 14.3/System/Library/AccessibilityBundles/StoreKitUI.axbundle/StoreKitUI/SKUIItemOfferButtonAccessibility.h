@interface SKUIItemOfferButtonAccessibility : __SKUIItemOfferButtonAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityIdentifier;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;

@end
