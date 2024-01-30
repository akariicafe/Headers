@class SFStartLocalSearchFeedback, NSObject, PARSession;
@protocol OS_dispatch_queue;

@interface PXSearchParsecAnalyticsSession : NSObject

@property (readonly, nonatomic) PARSession *session;
@property (nonatomic) long long currentQueryId;
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentStartSearchFeedback;
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentStartZeroKeywordLoadFeedback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportingQueue;

+ (id)sharedSession;

- (void)reportSearchSuggestions:(id)a0 searchResultSections:(id)a1 visibleIndexPaths:(id)a2 reportVisibleResultChangesOnly:(BOOL)a3;
- (void)reportSearchFieldCancelButtonSelected;
- (void)reportZeroKeywordLoadBegan;
- (void)_reportPhotosAppLaunchedOrEnteredForegroundEventWithFeedback:(id)a0;
- (void)reportPhotosAppQuit;
- (void)reportZeroKeywordLoadFinished;
- (void)reportPhotosAppLaunchedOrEnteredForegroundWithPreviousSearchText:(id)a0 previousSearchTokens:(id)a1;
- (void)reportZeroKeywordSelected:(id)a0 searchToken:(id)a1;
- (void)reportShowMoreResultsSelected:(BOOL)a0 searchResultsSection:(id)a1;
- (void)reportSearchFieldContentCleared;
- (void)reportSearchSuggestionSelected:(id)a0;
- (void)reportSearchQueryExecutionCompleted;
- (void)reportPhotosAppEnteredBackground;
- (void)reportSearchResultSelected:(id)a0;
- (void)reportSearchTabSelected;
- (id)init;
- (void)_reportFeedback:(id)a0;
- (void)reportZeroKeywordSections:(id)a0 visibleIndexPaths:(id)a1 reportVisibleResultChangesOnly:(BOOL)a2;
- (void)reportPhotosAppLaunchedOrEnteredForegroundWithSpotlightSearchActivity;
- (void)reportSearchTabDeselected;
- (void).cxx_destruct;
- (void)reportSearchFieldContentChanged:(id)a0 searchTokens:(id)a1;
- (void)reportRecentSearchSelectedWithSearchText:(id)a0 searchTokens:(id)a1;

@end
