@interface HFHumidityStatusItem : HFAbstractRangeStatusItem

+ (id)controllableServiceTypes;
+ (id)sensorServiceTypes;
+ (id)currentValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)maximumTargetValueCharacteristicType;
+ (id)currentModeCharacteristicTypes;
+ (id)targetModeCharacteristicTypes;
+ (unsigned long long)abstractTargetModeInResponse:(id)a0;
+ (unsigned long long)abstractCurrentModeInResponse:(id)a0;
+ (BOOL)shouldShowAverageForRange:(id)a0;
+ (BOOL)isPercentRange;
+ (id /* block */)displayValueComparator;
+ (id)localizationKeyPrefix;

- (id)title;

@end
