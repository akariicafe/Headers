@interface UIPageControlAccessibility : __UIPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setCurrentPage:(long long)a0;
- (BOOL)canBecomeFocused;
- (id)accessibilityUserInputLabels;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (void)_accessibilityCurrentPageDidChange;
- (unsigned int)_accessibilityMediaAnalysisOption;

@end
