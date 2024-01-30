@class NSArray, SFSearchResult, SFResultSection, UISearchToken, SPUISearchModel;
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
@property (retain) SPUISearchModel *model;
@property (weak, nonatomic) id<SPUIResultsViewDelegate> delegate;
@property (retain, nonatomic) SFSearchResult *goTakeoverResult;
@property (readonly) UISearchToken *searchToken;
@property (readonly, nonatomic) BOOL isHighlighting;
@property (copy, nonatomic) id /* block */ didFinishGettingAllResultsHandler;

- (void)highlightResultAfterUnmarkingText;
- (void)removeCompletionAndHighlightAsTyped:(BOOL)a0;
- (void)searchAgentUpdatedResults:(id)a0;
- (id)initWithSearchModel:(id)a0;
- (BOOL)searchAgentHasWindow:(id)a0;
- (id)initWithSearchModel:(id)a0 storeModel:(BOOL)a1 searchToken:(id)a2;
- (BOOL)isResultOriginalSearchSuggestion:(id)a0;
- (void)searchUpdatedWithString:(id)a0 tokenEntity:(id)a1 queryId:(unsigned long long)a2 wantsCompletions:(BOOL)a3 keyboardLanguage:(id)a4;
- (id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)a0 detailText:(id)a1 suggestionIdentifier:(id)a2 queryContext:(id)a3;
- (void)clearSuggestionSection;
- (id)asTypedSearchResult;
- (void)forceHighlightForResult:(id)a0;
- (void)searchAgentFinishedQueryWithoutAdditionalResults:(id)a0;
- (BOOL)_hasRealSuggestions;
- (void)changeTextFieldsReturnKeyType:(long long)a0 withGoTakeoverResult:(id)a1;
- (void).cxx_destruct;
- (void)_pushSectionsUpdate;
- (void)searchAgentClearedResults:(id)a0;

@end
