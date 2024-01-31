@interface UIPageControlAccessibility : __UIPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (void)setCurrentPage:(long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (void)_accessibilityCurrentPageDidChange;
- (unsigned int)_accessibilityMediaAnalysisOption;

@end
