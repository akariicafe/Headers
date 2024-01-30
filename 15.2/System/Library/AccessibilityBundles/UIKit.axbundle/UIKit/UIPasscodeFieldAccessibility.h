@interface UIPasscodeFieldAccessibility : __UIPasscodeFieldAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilitySetValue:(id)a0;
- (id)accessibilityElements;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)setShowsOKButton:(BOOL)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
