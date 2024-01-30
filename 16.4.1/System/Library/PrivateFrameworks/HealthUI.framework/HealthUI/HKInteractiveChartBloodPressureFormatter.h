@interface HKInteractiveChartBloodPressureFormatter : HKInteractiveChartDataFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_formattedStringWithRange:(id)a0 displayUnit:(BOOL)a1;
- (id)_stringFromRange:(id)a0 numberFormatter:(id)a1 displayType:(id)a2 unitController:(id)a3;
- (id)formattedUnitStringForChartData:(id)a0;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;

@end
