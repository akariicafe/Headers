@interface DirectionResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedDirection:(long long)a0;
+ (id)confirmationRequiredWithDirectionToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
