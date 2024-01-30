@interface SSBullseyeSuggestionsManager : NSObject

+ (id)orderedSuggestionsWithQueryContext:(id)a0 userSuggestion:(id)a1 userWebSuggestion:(id)a2 contactFilters:(id)a3 entityFilters:(id)a4 contactSuggestionResults:(id)a5 serverSuggestionResults:(id)a6 localSuggestionResults:(id)a7 localFilteringScore:(id)a8 scoringBlock:(id /* block */)a9 options:(id)a10;
+ (id)orderedSuggestionsWithQueryContext:(id)a0 userSuggestion:(id)a1 userWebSuggestion:(id)a2 contactFilters:(id)a3 entityFilters:(id)a4 shortcutSuggestionResults:(id)a5 contactSuggestionResults:(id)a6 serverSuggestionResults:(id)a7 localSuggestionResults:(id)a8 localFilteringScore:(id)a9 scoringBlock:(id /* block */)a10 options:(id)a11;

@end
