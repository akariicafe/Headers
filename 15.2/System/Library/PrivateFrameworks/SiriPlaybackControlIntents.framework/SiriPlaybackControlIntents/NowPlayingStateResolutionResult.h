@interface NowPlayingStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedNowPlayingState:(long long)a0;
+ (id)confirmationRequiredWithNowPlayingStateToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
