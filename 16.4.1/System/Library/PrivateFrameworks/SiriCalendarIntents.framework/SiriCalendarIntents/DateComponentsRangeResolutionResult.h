@interface DateComponentsRangeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedDateComponentsRange:(id)a0;
+ (id)successWithResolvedObject:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
