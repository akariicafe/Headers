@interface PlaybackSpeedResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithPlaybackSpeedToConfirm:(id)a0;
+ (id)disambiguationWithPlaybackSpeedsToDisambiguate:(id)a0;
+ (id)successWithResolvedPlaybackSpeed:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
