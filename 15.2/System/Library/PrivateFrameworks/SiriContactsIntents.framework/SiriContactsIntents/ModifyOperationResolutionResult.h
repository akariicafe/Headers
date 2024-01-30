@interface ModifyOperationResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedModifyOperation:(long long)a0;
+ (id)confirmationRequiredWithModifyOperationToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
