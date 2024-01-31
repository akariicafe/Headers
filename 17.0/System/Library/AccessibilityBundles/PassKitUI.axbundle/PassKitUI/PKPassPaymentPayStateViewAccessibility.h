@interface PKPassPaymentPayStateViewAccessibility : __PKPassPaymentPayStateViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_applyStatePreservingGlyphState:(BOOL)a0 overridingText:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)emphasizeStateIfPossible:(long long)a0 withOverrideText:(id)a1;

@end
