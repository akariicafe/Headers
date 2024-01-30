@interface MediaStreamResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedMediaStream:(id)a0;
+ (id)confirmationRequiredWithMediaStreamToConfirm:(id)a0;
+ (id)disambiguationWithMediaStreamsToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
