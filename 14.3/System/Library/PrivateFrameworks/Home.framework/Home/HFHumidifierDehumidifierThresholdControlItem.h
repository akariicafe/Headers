@interface HFHumidifierDehumidifierThresholdControlItem : HFRangeControlItem

+ (id)readOnlyCharacteristicTypes;

- (id)numberValueFormatter;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)a0;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)a0;
- (id)initWithValueSource:(id)a0 displayResults:(id)a1;

@end
