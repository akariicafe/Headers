@interface ContactAttributeTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithContactAttributeTypeToConfirm:(long long)a0;
+ (id)successWithResolvedContactAttributeType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
