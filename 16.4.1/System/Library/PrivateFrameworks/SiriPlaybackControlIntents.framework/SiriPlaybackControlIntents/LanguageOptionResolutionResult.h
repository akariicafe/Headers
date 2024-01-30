@interface LanguageOptionResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithLanguageOptionToConfirm:(id)a0;
+ (id)disambiguationWithLanguageOptionsToDisambiguate:(id)a0;
+ (id)successWithResolvedLanguageOption:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
