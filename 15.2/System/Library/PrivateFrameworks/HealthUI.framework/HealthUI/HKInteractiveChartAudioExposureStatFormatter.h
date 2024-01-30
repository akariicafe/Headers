@interface HKInteractiveChartAudioExposureStatFormatter : HKInteractiveChartGenericStatFormatter

- (id)_formatDuration:(double)a0;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_formatQuantityAudioData:(id)a0;
- (id)_formattedCurrentValueForChartData:(id)a0;
- (id)_attributedCurrentAudioExposureClassificationForChartData:(id)a0;
- (long long)_numberOfDaysVisibleInRange:(id)a0;
- (id)_majorAttributes;
- (id)_minorAttributes;
- (id)_formattedStringWithValue:(double)a0 unit:(id)a1 showUnit:(BOOL)a2;

@end
