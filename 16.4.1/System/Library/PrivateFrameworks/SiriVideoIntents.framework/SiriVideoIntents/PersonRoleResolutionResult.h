@interface PersonRoleResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithPersonRoleToConfirm:(long long)a0;
+ (id)successWithResolvedPersonRole:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
