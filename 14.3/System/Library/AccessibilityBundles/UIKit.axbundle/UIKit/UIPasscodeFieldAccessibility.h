@interface UIPasscodeFieldAccessibility : __UIPasscodeFieldAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilitySetValue:(id)a0;
- (id)accessibilityValue;
- (void)setShowsOKButton:(BOOL)a0;
- (id)_accessibilityChildren;

@end
