@interface _UIScrollViewScrollIndicatorAccessibility : ___UIScrollViewScrollIndicatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityValue;
- (BOOL)_accessibilityCanAppearInContextMenuPreview;
- (BOOL)_accessibilityOverridesInvisibility;
- (long long)_accessibilitySortPriority;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end
