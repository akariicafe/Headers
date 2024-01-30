@interface HFHeaterCoolerThresholdControlItem : HFRangeControlItem

+ (id)readOnlyCharacteristicTypes;

- (id)initWithValueSource:(id)a0 displayResults:(id)a1;
- (id)numberValueFormatter;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)a0;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)a0;

@end
