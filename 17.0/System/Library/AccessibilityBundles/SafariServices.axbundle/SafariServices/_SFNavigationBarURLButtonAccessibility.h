@interface _SFNavigationBarURLButtonAccessibility : ___SFNavigationBarURLButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (id)accessibilityLabel:(id)a0;
- (unsigned long long)accessibilityTraits:(id)a0;
- (id)accessibilityValue:(id)a0;

@end
