@interface SuggestionResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSuggestionToConfirm:(id)a0;
+ (id)disambiguationWithSuggestionsToDisambiguate:(id)a0;
+ (id)successWithResolvedSuggestion:(id)a0;

@end
