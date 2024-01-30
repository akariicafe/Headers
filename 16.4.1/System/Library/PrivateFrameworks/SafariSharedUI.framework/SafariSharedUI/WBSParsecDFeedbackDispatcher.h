@class NSString, NSMapTable, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher> {
    NSMapTable *_queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    NSObject<OS_dispatch_queue> *_queriesToDictionariesMappingQueue;
    NSArray *_feedbackListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)a0 forQueryID:(long long)a1 usesLoweredSearchBar:(BOOL)a2;
- (void)userDidCancelSession:(long long)a0;
- (void)userTypedGoToSearch:(id)a0 endpoint:(unsigned long long)a1 triggerEvent:(long long)a2 forQueryID:(long long)a3;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)a0 isSafariReaderAvailable:(BOOL)a1 forQueryID:(long long)a2 usesLoweredSearchBar:(BOOL)a3;
- (void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)a0 forQueryID:(long long)a1;
- (void)triggeredExperimentWithTreatmentId:(id)a0 withQueryID:(long long)a1 cfDiffered:(BOOL)a2 cfUsed:(BOOL)a3 cfError:(unsigned long long)a4;
- (void)flush;
- (id)_takeStartSearchFeedbackForSearchOfType:(long long)a0 forQuery:(id)a1;
- (void)didGenerateCompletionListItemsWithRankingObserver:(id)a0 forQueryID:(long long)a1;
- (id)_customFeedbackOfType:(unsigned long long)a0 JSONDictionary:(id)a1;
- (void)didReceiveWebSuggestionsForQuery:(id)a0 fromSearchProvider:(id)a1 responseSize:(long long)a2 statusCode:(long long)a3 networkTimingData:(id)a4;
- (void)userTypedURLDirectlyForQuery:(id)a0 triggerEvent:(long long)a1;
- (void)_postFeedbackOnFeedbackQueue:(id)a0 forQueryID:(long long)a1;
- (void)userDidTapMicKey:(long long)a0;
- (void)postFeedback:(id)a0 forQueryID:(long long)a1;
- (void)userDidTypeKey:(long long)a0;
- (void)sendNewTabFeedback:(BOOL)a0;
- (void)didDisplayCompletionListItems:(id)a0 forQuery:(id)a1 forEvent:(long long)a2;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)a0 forQueryID:(long long)a1;
- (void)userDidEngageWithCompletionListItem:(id)a0 onActionButton:(BOOL)a1 method:(long long)a2 doesMatchSiriSuggestion:(BOOL)a3;
- (void)didReceiveParsecResultsAfterTimeout:(id)a0;
- (void)didRankSections:(id)a0 blendingDuration:(double)a1 feedbackForHiddenAndDuplicateResults:(id)a2 forQueryID:(long long)a3;
- (void)sendCrowdsourcedAutoFillFeedback:(id)a0 forQueryID:(long long)a1;
- (void)userDidCancelSession;
- (void)userDidEngageWithCompletionListItem:(id)a0 onActionButton:(BOOL)a1 method:(long long)a2;
- (void)didReceiveLocalResultsForQuery:(id)a0;
- (void)triggeredExperimentWithTreatmentId:(id)a0 withQueryID:(long long)a1;
- (void)_setStartSearchFeedback:(id)a0 forSearchOfType:(long long)a1 withQuery:(id)a2;
- (void)didBeginSearchOfType:(long long)a0 withQuery:(id)a1 endpoint:(unsigned long long)a2;
- (id)initWithSession:(id)a0;
- (void)didBeginSearchOfType:(long long)a0 withQuery:(id)a1 urlString:(id)a2 headers:(id)a3 endpoint:(unsigned long long)a4;
- (void)searchViewDisappearedBecauseOfEvent:(long long)a0 forQueryID:(long long)a1;
- (void).cxx_destruct;

@end
