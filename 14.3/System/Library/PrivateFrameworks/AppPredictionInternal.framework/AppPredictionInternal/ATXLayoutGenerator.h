@class NSArray;

@interface ATXLayoutGenerator : NSObject <ATXLayoutGeneratorProtocol> {
    NSArray *_rankedSuggestions;
    NSArray *_layoutsToConsider;
}

+ (id)sortLayouts:(id)a0;

- (id)generateGreedySuggestionLayoutForUILayoutType:(long long)a0 layoutTypesForRankedSuggestions:(id)a1 isSuggestionsWidgetLayout:(BOOL)a2;
- (double)weightForConfidenceCategory:(long long)a0;
- (void).cxx_destruct;
- (double)marginalScoreForSuggestion:(id)a0 topRankingSuggestion:(id)a1;
- (id)initWithRankedSuggestions:(id)a0 layoutsToConsider:(id)a1;
- (id)generateLayoutToSuggestionDictionary;
- (id)generateValidLayouts;
- (void)scoreLayout:(id)a0;
- (id)uuidOfHighestConfidenceSuggestionFromRankedSuggestions:(id)a0 uiLayoutType:(long long)a1;

@end
