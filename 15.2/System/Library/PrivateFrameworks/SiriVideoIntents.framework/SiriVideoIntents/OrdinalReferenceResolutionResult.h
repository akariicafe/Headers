@interface OrdinalReferenceResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedOrdinalReference:(long long)a0;
+ (id)confirmationRequiredWithOrdinalReferenceToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
