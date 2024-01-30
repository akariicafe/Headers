@interface VolumeSettingQualifierResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedVolumeSettingQualifier:(long long)a0;
+ (id)confirmationRequiredWithVolumeSettingQualifierToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
