@interface HFAbstractRangeStatusItem : HFStatusItem

+ (id)controllableServiceTypes;
+ (id)sensorServiceTypes;
+ (id)currentValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)maximumTargetValueCharacteristicType;
+ (id)currentModeCharacteristicTypes;
+ (id)targetModeCharacteristicTypes;
+ (long long)currentStateForResponses:(id)a0;
+ (unsigned long long)badgeTypeForState:(long long)a0;
+ (unsigned long long)statusItemCategory;
+ (id)titleStringForState:(long long)a0;
+ (id)descriptionStringForCharacteristicType:(id)a0 withResponses:(id)a1;
+ (unsigned long long)abstractTargetModeInResponse:(id)a0;
+ (unsigned long long)abstractCurrentModeInResponse:(id)a0;
+ (id)unknownValueDescriptionString;
+ (BOOL)shouldShowAverageForRange:(id)a0;
+ (id)formatValue:(id)a0 forCharacteristic:(id)a1;
+ (id)customValueFormatter;
+ (BOOL)isPercentRange;
+ (id)_defaultValueFormatter;
+ (id /* block */)displayValueComparator;

- (id)title;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;

@end
