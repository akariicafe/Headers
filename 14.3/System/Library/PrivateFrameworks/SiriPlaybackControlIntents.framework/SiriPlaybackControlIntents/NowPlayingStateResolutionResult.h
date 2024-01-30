@interface NowPlayingStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedNowPlayingState:(long long)a0;
+ (id)confirmationRequiredWithNowPlayingStateToConfirm:(long long)a0;

@end
