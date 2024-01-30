@interface UIPageControlAccessibility : __UIPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setCurrentPage:(long long)a0;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (void)_accessibilityCurrentPageDidChange;
- (unsigned int)_accessibilityMediaAnalysisOption;

@end
