@interface HKInteractiveChartInfographicFactory : NSObject

+ (BOOL)infographicSupportedForDisplayType:(id)a0 healthStore:(id)a1;
+ (id)infographicViewControllerForDisplayType:(id)a0 healthStore:(id)a1;
+ (id)_environmentalAudioExposureInfographic;
+ (id)_headphoneAudioExposureInfographic;
+ (id)_itemForAudioInfographicWithClassification:(unsigned long long)a0 descriptionKey:(id)a1;
+ (id)_exposureLimitTextItem;
+ (id)_itemWithTitleKey:(id)a0 valueKey:(id)a1;
+ (id)_itemWithTitleKey:(id)a0 valueKey:(id)a1 hideSeparator:(BOOL)a2;
+ (id)_whoExposureTextItem;
+ (id)_attributedSymbolForAudioClassification:(unsigned long long)a0 textStyle:(id)a1;
+ (id)_audioTitleAttributes;
+ (id)_tableTitleAttributes;

@end
