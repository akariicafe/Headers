@interface SBCursiveTextViewAccessibility : __SBCursiveTextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (BOOL)_accessibilityOverridesInvisibility;
- (BOOL)_accessibilityViewIsVisible;
- (void)loadText:(id)a0 pointSize:(double)a1;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end
