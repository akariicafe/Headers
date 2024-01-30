@interface PXSearchParsecAnalyticsUtilities : NSObject

+ (id)visibleSFSearchResultsFromZeroKeywordSections:(id)a0 visibleIndexPaths:(id)a1 queryId:(long long)a2;
+ (id)visibleSFSearchResultsFromSearchSuggestions:(id)a0 searchResultSections:(id)a1 visibleIndexPaths:(id)a2 queryId:(long long)a3;
+ (id)_searchResultDescriptionForZeroKeyword:(id)a0;
+ (id)SFSearchResultFromRecentSearchText:(id)a0 recentSearchSuggestions:(id)a1 queryId:(long long)a2;
+ (id)_descriptionForCollectionSearchResult:(id)a0;
+ (unsigned long long)_wordCountForSearchString:(id)a0;
+ (id)sectionRankingFeedbackWithSearchSuggestions:(id)a0 searchResultSections:(id)a1 visibleIndexPaths:(id)a2 queryId:(long long)a3;
+ (id)_descriptionForSearchUserCategory:(unsigned long long)a0;
+ (id)_tokenCategoryTypesForSearchTokens:(id)a0;
+ (id)_identifierForSearchResultObject:(id)a0;
+ (id)commandFeedbackFromSFSearchResult:(id)a0;
+ (id)_identifierForSearchSuggestion:(id)a0;
+ (id)_resultRankingFeedbacksFromSFSearchResults:(id)a0;
+ (id)sectionRankingFeedbackWithSearchZeroKeywordSections:(id)a0 visibleIndexPaths:(id)a1 queryId:(long long)a2;
+ (id)_baseSFSearchResultForQueryId:(long long)a0;
+ (id)_descriptionForAssetAggregationSearchResult:(id)a0;
+ (id)SFSearchResultFromSearchSuggestion:(id)a0 zeroKeyword:(id)a1 queryId:(long long)a2;
+ (id)_descriptionForZeroKeywordSectionType:(long long)a0;
+ (id)_resultSectionForSearchSuggestions:(id)a0 queryId:(long long)a1;
+ (id)_descriptionForSectionType:(unsigned long long)a0;
+ (id)resultSectionForSearchSection:(id)a0 sectionIsVisible:(BOOL)a1 queryId:(long long)a2;
+ (id)_identifierForZeroKeyword:(id)a0;
+ (id)descriptionForSearchString:(id)a0 searchTokens:(id)a1;
+ (id)SFSearchResultFromUISearchToken:(id)a0 queryId:(long long)a1;
+ (id)_searchResultDescriptionForSearchResultObject:(id)a0;
+ (id)_resultSectionForZeroKeywordSection:(id)a0 sectionIsVisible:(BOOL)a1 queryId:(long long)a2;
+ (id)_visibleIndexPathsForSearchResultsFromVisibleIndexPaths:(id)a0 queryHasSuggestions:(BOOL)a1;
+ (id)SFSearchResultFromZeroKeyword:(id)a0 queryId:(long long)a1;
+ (id)SFSearchResultFromSearchResultObject:(id)a0 queryId:(long long)a1;
+ (id)_sectionRankingFeedbackWithResultSection:(id)a0 localSectionPosition:(unsigned long long)a1;
+ (id)SFSearchResultFromSearchSuggestion:(id)a0 queryId:(long long)a1;

@end
