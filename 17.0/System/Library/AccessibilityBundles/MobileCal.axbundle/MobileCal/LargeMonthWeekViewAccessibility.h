@interface LargeMonthWeekViewAccessibility : __LargeMonthWeekViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)reloadData;
- (id)accessibilityElements;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axMonthHeader;
- (void)_axUpdateDayNumberLabels;
- (void)_axUpdateMonthAXLabel;
- (void)_rebuildDayNumberLabels;
- (void)_updateMonthLabel;

@end
