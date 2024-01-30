@interface VolumeSettingStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedVolumeSettingState:(long long)a0;
+ (id)confirmationRequiredWithVolumeSettingStateToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
