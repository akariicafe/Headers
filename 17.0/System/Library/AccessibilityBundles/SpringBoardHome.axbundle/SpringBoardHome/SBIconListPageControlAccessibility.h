@interface SBIconListPageControlAccessibility : __SBIconListPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityScrollAncestor;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (BOOL)_accessibilityViewIsVisible;
- (long long)_accessibilityCurrentPageIndex;
- (BOOL)_accessibilityGoToNextPage;
- (BOOL)_axHasOpenFolder;
- (BOOL)_axIsLastPage;
- (void)_axSetNewPage:(long long)a0;

@end
