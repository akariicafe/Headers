@interface UICalendarViewAccessibility : __UICalendarViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_configuedCellForCollectionView:(id)a0 indexPath:(id)a1 day:(id)a2;
- (void)_setVisibleMonth:(id)a0 animated:(BOOL)a1 updateDataSource:(BOOL)a2 updateCollectionView:(BOOL)a3 notifyDelegate:(BOOL)a4;
- (void)_setupViewHierarchy;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityUpdateVisibleMonth;

@end
