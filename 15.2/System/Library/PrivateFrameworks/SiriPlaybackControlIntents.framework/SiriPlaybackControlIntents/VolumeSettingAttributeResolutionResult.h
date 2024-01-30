@interface VolumeSettingAttributeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedVolumeSettingAttribute:(long long)a0;
+ (id)confirmationRequiredWithVolumeSettingAttributeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
