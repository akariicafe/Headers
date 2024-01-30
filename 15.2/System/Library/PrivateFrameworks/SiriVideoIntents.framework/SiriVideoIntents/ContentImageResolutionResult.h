@interface ContentImageResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedContentImage:(id)a0;
+ (id)disambiguationWithContentImagesToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithContentImageToConfirm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
