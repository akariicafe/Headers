@class NSArray, SFSearchResult, SFResultSection;
@protocol SPUIResultsViewDelegate;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate> {
    unsigned long long _startTime;
}

@property (retain) NSArray *resultSections;
@property (retain) SFResultSection *suggestionsSection;
@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property BOOL hasResultsWaitingToUpdate;
@property (retain) SFResultSection *searchThroughSection;
@property unsigned long long previousQueryId;
@property (retain) SFSearchResult *highlightedResult;
@property (weak, nonatomic) id<SPUIResultsViewDelegate> delegate;
@property (retain, nonatomic) SFSearchResult *goTakeoverResult;
@property (readonly, nonatomic) BOOL isHighlighting;
@property (copy, nonatomic) id /* block */ didFinishGettingAllResultsHandler;

- (id)initWithSearchModel:(id)a0;
- (void)searchAgentFinishedQueryWithoutAdditionalResults:(id)a0;
- (void)highlightResultAfterUnmarkingText;
- (id)asTypedSearchResult;
- (void).cxx_destruct;
- (void)changeTextFieldsReturnKeyType:(long long)a0 withGoTakeoverResult:(id)a1;
- (id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)a0 detailText:(id)a1 suggestionIdentifier:(id)a2 queryContext:(id)a3;
- (void)searchUpdatedWithString:(id)a0 tokenEntity:(id)a1 queryId:(unsigned long long)a2 wantsCompletions:(BOOL)a3 keyboardLanguage:(id)a4;
- (void)removeCompletionAndHighlightAsTyped:(BOOL)a0;
- (BOOL)_hasRealSuggestions;
- (void)searchAgentUpdatedResults:(id)a0;
- (BOOL)isResultOriginalSearchSuggestion:(id)a0;
- (void)forceHighlightForResult:(id)a0;
- (void)searchAgentClearedResults:(id)a0;
- (void)clearSuggestionSection;
- (void)_pushSectionsUpdate;

@end
