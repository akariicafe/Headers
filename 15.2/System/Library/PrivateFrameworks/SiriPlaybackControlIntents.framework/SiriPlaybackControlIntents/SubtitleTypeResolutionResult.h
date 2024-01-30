@interface SubtitleTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedSubtitleType:(long long)a0;
+ (id)confirmationRequiredWithSubtitleTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
