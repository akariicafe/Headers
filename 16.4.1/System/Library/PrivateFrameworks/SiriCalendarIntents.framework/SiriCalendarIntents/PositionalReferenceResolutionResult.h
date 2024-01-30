@interface PositionalReferenceResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithPositionalReferenceToConfirm:(long long)a0;
+ (id)successWithResolvedPositionalReference:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
