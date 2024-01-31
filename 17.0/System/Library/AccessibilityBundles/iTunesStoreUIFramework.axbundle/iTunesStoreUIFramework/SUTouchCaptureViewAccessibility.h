@interface SUTouchCaptureViewAccessibility : __SUTouchCaptureViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityPerformEscape;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
