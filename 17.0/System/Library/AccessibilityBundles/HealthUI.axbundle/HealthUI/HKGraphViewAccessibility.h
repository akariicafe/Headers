@interface HKGraphViewAccessibility : __HKGraphViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityChartDescriptor;
- (BOOL)_accessibilitySupportsChartsV2;
- (void)_updateGraphViewConfigurationIfNecessary;
- (void)_accessibilitySetChartElements:(id)a0;
- (id)_accessibilityChartSummary;
- (void)_accessibilityClearElements;
- (BOOL)_accessibilityIsContinuous;
- (id)_accessibilityChartElements;
- (id)_accessibilityDataSeries;
- (double)_accessibilityScaledYValue:(double)a0;
- (id)_accessibilitySeriesTitle;
- (id)_accessibilityXAxis;
- (id)_accessibilityYAxis;

@end
