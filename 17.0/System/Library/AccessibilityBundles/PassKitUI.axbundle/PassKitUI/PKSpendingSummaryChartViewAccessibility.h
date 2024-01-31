@interface PKSpendingSummaryChartViewAccessibility : __PKSpendingSummaryChartViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)accessibilityChartDescriptor;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilitySupportsChartsV2;
- (id)_accessibilityChartSummary;
- (BOOL)_accessibilityIsContinuous;
- (id)_accessibilityDataSeries;
- (id)_accessibilitySeriesTitle;
- (id)_accessibilityXAxis;
- (id)_accessibilityYAxis;
- (id)_axSpendingValues;
- (id)_axStartDates;
- (id)_axStringFromCurrency:(id)a0;

@end
