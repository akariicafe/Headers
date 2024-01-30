@class HKUnitPreferenceController, UIFont, HKDisplayType;

@interface HKInteractiveChartDataFormatter : NSObject

@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (weak, nonatomic) HKDisplayType *displayType;

- (void).cxx_destruct;
- (id)attributedStringForValue:(id)a0;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_unitNameFromUnit:(id)a0 number:(id)a1;
- (id)_formattedPercentageStringWithValue:(double)a0 unitString:(id)a1 showUnit:(BOOL)a2;
- (id)_formattedStringForValue:(id)a0;
- (id)attributedStringWithValue:(double)a0 unit:(id)a1 showUnit:(BOOL)a2;
- (id)formattedStringWithValue:(double)a0 unitString:(id)a1 showUnit:(BOOL)a2;
- (id)formattedUnitStringForChartData:(id)a0;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;

@end
