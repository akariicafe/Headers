@interface ShuffleStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedShuffleState:(long long)a0;
+ (id)confirmationRequiredWithShuffleStateToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
