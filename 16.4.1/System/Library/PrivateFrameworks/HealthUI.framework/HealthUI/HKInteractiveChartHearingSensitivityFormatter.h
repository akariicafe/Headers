@interface HKInteractiveChartHearingSensitivityFormatter : HKInteractiveChartDataFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_unitNameFromUnit:(id)a0 number:(id)a1;
- (id)_formattedStringForValue:(id)a0;
- (id)formattedUnitStringForChartData:(id)a0;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;
- (id)initWithUnitController:(id)a0;

@end
