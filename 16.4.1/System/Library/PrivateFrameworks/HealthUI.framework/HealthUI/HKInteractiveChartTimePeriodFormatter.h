@class HKTimePeriodDisplayTypeValueFormatter;

@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter {
    HKTimePeriodDisplayTypeValueFormatter *_timePeriodFormatter;
}

- (void).cxx_destruct;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_formattedStringWithData:(id)a0 roundToHours:(BOOL)a1 displayUnit:(BOOL)a2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1 customDataType:(long long)a2;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;

@end
