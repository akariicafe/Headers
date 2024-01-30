@interface UISearchBarAccessibility : __UISearchBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)layoutSubviews;
- (id)imageForSearchBarIcon:(long long)a0 state:(unsigned long long)a1;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEndEditing;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySubviews;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;

@end
