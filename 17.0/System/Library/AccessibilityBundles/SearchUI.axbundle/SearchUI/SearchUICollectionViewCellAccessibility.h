@interface SearchUICollectionViewCellAccessibility : __SearchUICollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilityHitTestReverseOrder;
- (BOOL)_accessibilityContainsNestedAccessibilityView;
- (BOOL)_accessibilityHasAccessibleSubviews;
- (BOOL)_accessibilityContainsCombinedView;
- (id)_accessibilityLabelFallback;

@end
