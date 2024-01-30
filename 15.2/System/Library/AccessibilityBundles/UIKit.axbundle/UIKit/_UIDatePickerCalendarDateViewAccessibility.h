@interface _UIDatePickerCalendarDateViewAccessibility : ___UIDatePickerCalendarDateViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_setVisibleMonth:(id)a0 animated:(BOOL)a1 updateDataSource:(BOOL)a2 updateCollectionView:(BOOL)a3 notifyDelegate:(BOOL)a4;
- (id)_cellForCollectionView:(id)a0 indexPath:(id)a1 day:(id)a2;
- (void)_setupViewHierarchy;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityUpdateVisibleMonth;

@end
