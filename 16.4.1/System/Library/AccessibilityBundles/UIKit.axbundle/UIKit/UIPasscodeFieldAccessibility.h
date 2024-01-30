@interface UIPasscodeFieldAccessibility : __UIPasscodeFieldAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)setShowsOKButton:(BOOL)a0;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
