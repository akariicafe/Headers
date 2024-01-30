@interface HKInteractiveChartInfographicFactory : NSObject

+ (id)_titleAttributes;
+ (BOOL)infographicSupportedForDisplayType:(id)a0 healthStore:(id)a1;
+ (id)infographicViewControllerForDisplayType:(id)a0 healthStore:(id)a1;
+ (id)_environmentalAudioExposureInfographic;
+ (id)_headphoneAudioExposureInfographic;
+ (id)_appleWalkingSteadinessInfographicForDisplayType:(id)a0;
+ (id)_itemForAudioInfographicWithClassification:(unsigned long long)a0 descriptionKey:(id)a1;
+ (id)_exposureLimitTextItem;
+ (id)_itemWithTitleKey:(id)a0 valueKey:(id)a1;
+ (id)_itemWithTitleKey:(id)a0 valueKey:(id)a1 hideSeparator:(BOOL)a2;
+ (id)_whoExposureTextItem;
+ (id)_itemForAppleWalkingSteadinessInfographicWithClassification:(long long)a0;
+ (id)_attributedSymbolForAudioClassification:(unsigned long long)a0 textStyle:(id)a1;
+ (id)_tableTitleAttributes;
+ (BOOL)infographicSupportedForDisplayType:(id)a0 secondaryDisplayType:(id)a1 healthStore:(id)a2;
+ (id)infographicViewControllerForDisplayType:(id)a0 secondaryDisplayType:(id)a1 addDataViewControllerProvider:(id)a2 healthStore:(id)a3;

@end
