@interface TabBarItemViewAccessibility : __TabBarItemViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setActive:(BOOL)a0;
- (void)setTitleText:(id)a0;
- (id)accessibilityIdentifier;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityUpdateAXInfo;

@end
