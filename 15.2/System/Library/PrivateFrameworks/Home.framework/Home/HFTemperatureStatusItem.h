@interface HFTemperatureStatusItem : HFAbstractRangeStatusItem

+ (id)controllableServiceTypes;
+ (id)sensorServiceTypes;
+ (id)currentValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)maximumTargetValueCharacteristicType;
+ (id)currentModeCharacteristicTypes;
+ (id)targetModeCharacteristicTypes;
+ (unsigned long long)statusItemCategory;
+ (id)titleStringForState:(long long)a0;
+ (unsigned long long)abstractTargetModeInResponse:(id)a0;
+ (unsigned long long)abstractCurrentModeInResponse:(id)a0;
+ (id)unknownValueDescriptionString;
+ (BOOL)shouldShowAverageForRange:(id)a0;
+ (id)customValueFormatter;
+ (BOOL)isPercentRange;
+ (id /* block */)displayValueComparator;

- (id)title;

@end
