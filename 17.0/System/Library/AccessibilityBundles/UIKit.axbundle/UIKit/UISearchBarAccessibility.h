@interface UISearchBarAccessibility : __UISearchBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)imageForSearchBarIcon:(long long)a0 state:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEndEditing;
- (BOOL)_accessibilityDisplayFocusIndicatorForHoverTextView;
- (id)_accessibilityFuzzyHitTestElements;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySubviews;
- (BOOL)_accessibilityUnfocusableViewCanBeFocusedForHoverText;

@end
