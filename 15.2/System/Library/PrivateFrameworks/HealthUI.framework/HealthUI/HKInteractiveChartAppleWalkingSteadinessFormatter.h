@interface HKInteractiveChartAppleWalkingSteadinessFormatter : HKInteractiveChartGenericStatFormatter

- (id)attributedStringWithValue:(double)a0 unit:(id)a1 showUnit:(BOOL)a2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)selectedRangeSeparatorString;
- (id)_formattedCurrentValueForChartData:(id)a0 context:(long long)a1;

@end
