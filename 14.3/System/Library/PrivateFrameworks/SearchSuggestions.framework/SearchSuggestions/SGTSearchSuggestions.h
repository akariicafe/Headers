@interface SGTSearchSuggestions : NSObject

+ (id)searchThroughSuggestionForQuery:(id)a0 withInfo:(id)a1;
+ (id)filteredSuggestions:(id)a0 seen:(id)a1 ignore:(id)a2 maxCount:(long long)a3 threshold:(double)a4;
+ (id)defaultSearchSuggestions;
+ (BOOL)sectionSupportsShowMoreInApp:(id)a0;
+ (id)orderedSuggestionsWithUserSuggestion:(id)a0 userWebSuggestion:(id)a1 contactSuggestions:(id)a2 localSuggestions:(id)a3 serverSuggestions:(id)a4 options:(id)a5;
+ (id)dedupeWebURLSuggestionsFromSections:(id)a0;

@end
