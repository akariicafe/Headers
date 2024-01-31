@interface HKInteractiveChartViewControllerAccessibility : __HKInteractiveChartViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (void)_axConfigureGraphAccessibilityFromData:(id)a0 forGraphView:(id)a1;
+ (void)_axConfigureGraphViewInfoFromData:(id)a0 forGraphView:(id)a1;
+ (void)_axTrimAndInterpolateValues:(id *)a0 withXvalues:(id *)a1;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_displayNameForDisplayType:(id)a0;
- (void)_replacePrimaryGraphViewControllerWithTimeScope:(long long)a0 anchorDate:(id)a1 animated:(BOOL)a2;
- (void)_setDateSelectorToVisibleRange;
- (void)graphView:(id)a0 didUpdateSelectedPoint:(id)a1;
- (void)graphViewDidEndSelection:(id)a0;

@end
