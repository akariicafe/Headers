@interface OrdinalReferenceResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithOrdinalReferenceToConfirm:(long long)a0;
+ (id)successWithResolvedOrdinalReference:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
