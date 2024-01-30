@interface SSBullseyeSuggestionsManager : NSObject

+ (id)orderedSuggestionsWithQueryContext:(id)a0 userSuggestion:(id)a1 userWebSuggestion:(id)a2 contactFilters:(id)a3 entityFilters:(id)a4 contactSuggestionResults:(id)a5 serverSuggestionResults:(id)a6 localSuggestionResults:(id)a7 localFilteringScore:(id)a8 scoringBlock:(id /* block */)a9 options:(id)a10;

@end
