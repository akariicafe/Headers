@interface GroupTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedGroupType:(long long)a0;
+ (id)confirmationRequiredWithGroupTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
