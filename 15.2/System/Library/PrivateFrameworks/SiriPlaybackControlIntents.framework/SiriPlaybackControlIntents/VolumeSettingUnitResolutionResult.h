@interface VolumeSettingUnitResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedVolumeSettingUnit:(long long)a0;
+ (id)confirmationRequiredWithVolumeSettingUnitToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
