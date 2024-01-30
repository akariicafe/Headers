@interface UISearchBarAccessibility : __UISearchBarAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)layoutSubviews;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySubviews;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (id)imageForSearchBarIcon:(long long)a0 state:(unsigned long long)a1;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEndEditing;
- (id)_accessibilitySearchBarMaskView;

@end
