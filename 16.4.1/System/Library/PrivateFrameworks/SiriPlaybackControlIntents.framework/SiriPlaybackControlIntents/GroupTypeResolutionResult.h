@interface GroupTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithGroupTypeToConfirm:(long long)a0;
+ (id)successWithResolvedGroupType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
