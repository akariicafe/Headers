@class HKGraphSeries, NSString, UIColor, HKInteractiveChartDataFormatter;

@interface HKInteractiveChartDisplayType : HKDisplayType

@property (readonly, nonatomic) NSString *specifiedDisplayName;
@property (readonly, nonatomic) NSString *specifiedUnitName;
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter;
@property (readonly, nonatomic) HKGraphSeries *graphSeries;
@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)initWithGraphSeries:(id)a0 displayName:(id)a1 unitName:(id)a2 valueFormatter:(id)a3 dataTypeCode:(long long)a4;
- (id)description;
- (id)displayName;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)a0;
- (id)colorWithDisplayCategoryController:(id)a0;
- (id)initWithGraphSeries:(id)a0 baseDisplayType:(id)a1 valueFormatter:(id)a2 dataTypeCode:(long long)a3;
- (id)unitNameForValue:(id)a0 unitPreferenceController:(id)a1;
- (id)_initWithGraphSeries:(id)a0 displayName:(id)a1 unitDisplayNameOverrides:(id)a2 localizationTableOverride:(id)a3 chartingRules:(id)a4 unitName:(id)a5 valueFormatter:(id)a6 dataTypeCode:(long long)a7;
- (long long)_internalDisplayTypeIdentifier;

@end
