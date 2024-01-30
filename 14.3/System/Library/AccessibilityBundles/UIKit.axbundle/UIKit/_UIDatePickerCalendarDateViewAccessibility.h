@interface _UIDatePickerCalendarDateViewAccessibility : ___UIDatePickerCalendarDateViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_setVisibleMonth:(id)a0 animated:(BOOL)a1 updateDataSource:(BOOL)a2 updateCollectionView:(BOOL)a3 notifyDelegate:(BOOL)a4;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setupViewHierarchy;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (id)_cellForCollectionView:(id)a0 indexPath:(id)a1 day:(id)a2;
- (void)_axMarkupSubviews;

@end
