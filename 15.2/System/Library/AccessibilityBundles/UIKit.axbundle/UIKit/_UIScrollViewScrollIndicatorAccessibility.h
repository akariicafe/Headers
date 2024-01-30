@interface _UIScrollViewScrollIndicatorAccessibility : ___UIScrollViewScrollIndicatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityOverridesInvisibility;
- (long long)_accessibilitySortPriority;
- (BOOL)_accessibilityCanAppearInContextMenuPreview;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end
