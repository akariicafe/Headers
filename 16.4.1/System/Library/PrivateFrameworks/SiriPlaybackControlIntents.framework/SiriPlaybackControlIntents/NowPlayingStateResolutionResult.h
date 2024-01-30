@interface NowPlayingStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithNowPlayingStateToConfirm:(long long)a0;
+ (id)successWithResolvedNowPlayingState:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
