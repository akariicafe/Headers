@interface NLMediaTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedNLMediaType:(long long)a0;
+ (id)confirmationRequiredWithNLMediaTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
