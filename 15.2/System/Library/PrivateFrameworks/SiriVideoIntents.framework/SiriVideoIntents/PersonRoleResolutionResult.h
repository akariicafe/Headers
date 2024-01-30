@interface PersonRoleResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedPersonRole:(long long)a0;
+ (id)confirmationRequiredWithPersonRoleToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
