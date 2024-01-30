@interface UIPageControlAccessibility : __UIPageControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (void)setCurrentPage:(long long)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityUserInputLabels;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (void)_accessibilityCurrentPageDidChange;

@end
