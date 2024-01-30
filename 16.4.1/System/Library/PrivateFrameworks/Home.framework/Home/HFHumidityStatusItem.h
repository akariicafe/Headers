@interface HFHumidityStatusItem : HFAbstractRangeStatusItem

+ (unsigned long long)abstractCurrentModeInResponse:(id)a0;
+ (unsigned long long)abstractTargetModeInResponse:(id)a0;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)currentValueCharacteristicType;
+ (id /* block */)displayValueComparator;
+ (BOOL)isPercentRange;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)overrideValueDisplayRange;
+ (id)sensorServiceTypes;
+ (BOOL)shouldShowAverageForRange:(id)a0;
+ (unsigned long long)statusItemCategory;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;
+ (id)titleStringForState:(long long)a0;
+ (id)unknownValueDescriptionString;

- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;

@end
