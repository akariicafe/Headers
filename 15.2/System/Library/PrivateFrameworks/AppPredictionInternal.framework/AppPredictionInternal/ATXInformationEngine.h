@class ATXTimelineAbuseControlConfig, NSString, ATXInformationStore, _PASQueueLock, ATXInfoToBlendingConfidenceMapper, ATXInformationFilter, NSObject, ATXInformationFeatureWeights, _PASSimpleCoalescingTimer;
@protocol ATXInformationRankerProtocol, ATXInformationFeaturizerProtocol, OS_dispatch_source, OS_dispatch_queue;

@interface ATXInformationEngine : NSObject <ATXTimelineRelevanceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    _PASQueueLock *_lock;
    _PASSimpleCoalescingTimer *_coalescedPredictionUpdateOperation;
    ATXInfoToBlendingConfidenceMapper *_confidenceMapper;
    ATXInformationStore *_store;
    ATXInformationFilter *_filter;
    id<ATXInformationFeaturizerProtocol> _featurizer;
    id<ATXInformationRankerProtocol> _ranker;
    ATXInformationFeatureWeights *_featureWeights;
}

@property (readonly, nonatomic) ATXTimelineAbuseControlConfig *abuseControlConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertSuggestions:(id)a0 forInfoSourceIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)allInfoSuggestionsForSourceId:(id)a0;
- (void)recordRecentTimelineEntries:(id)a0 forWidget:(id)a1;
- (unsigned long long)countOfInfoSuggestionsForSourceId:(id)a0;
- (id)_proactiveSuggestionFromScoredInfoSuggestion:(id)a0 clientModelId:(id)a1 clientModelVersion:(id)a2;
- (BOOL)shouldSkipUpdatingPredictionRefreshDateForPreviouslyScheduledDate:(id)a0 newDate:(id)a1;
- (id)allRelevantInfoSuggestions;
- (id)forceUpdateAndReturnPredictions;
- (unsigned long long)countOfInfoSuggestionsForBundleId:(id)a0;
- (id)_clearSuggestionsForInfoSourceIdentifier:(id)a0;
- (void)_schedulePredictionUpdateNoLaterThanDate:(id)a0 guardedData:(id)a1;
- (void)resetSuggestionsTo:(id)a0 forInfoSourceIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateClientModelWithClientModelId:(id)a0 withSuggestions:(id)a1;
- (void)handleProactiveStackRotationForInfoSuggestion:(id)a0 isStalenessRotation:(BOOL)a1;
- (BOOL)_currentActivePredictionsContainSuggestionFromSourceId:(id)a0 guardedData:(id)a1;
- (void).cxx_destruct;
- (void)_pushSuggestionsToBlendingLayerIfDifferentFromTheLastCacheUpdate:(id)a0 cachedSuggestions:(id)a1;
- (id)init;
- (BOOL)deleteAllSuggestionsForSourceId:(id)a0 excludingSuggestionId:(id)a1;
- (void)_pushPredictionsToBlendingLayer:(id)a0 forClientModel:(id)a1 withClientModelVersion:(id)a2;
- (void)clearSuggestionsForInfoSourceIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updatePredictionsWithGuardedData:(id)a0;
- (void)getSuggestionsForInfoSourceIdentifier:(id)a0 withReply:(id /* block */)a1;
- (id)latestUpdateDateForSourceId:(id)a0;
- (void)_updatePredictionRefreshDateIfNecessaryForSuggestions:(id)a0;
- (id)allInfoSuggestions;
- (void)_pushPredictionsToBlendingLayerIfDifferentFromTheLastCacheUpdate:(id)a0 forClientModel:(id)a1 withClientModelVersion:(id)a2 cachedSuggestions:(id)a3;
- (id)currentPredictions;
- (id)_insertSuggestions:(id)a0 forInfoSourceIdentifier:(id)a1;
- (id)scheduledPredictionRefreshDate;
- (void)handleSuggestionDismissal:(id)a0 isDismissalLongTerm:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithFilter:(id)a0 featurizer:(id)a1 ranker:(id)a2 infoStore:(id)a3 confidenceMapper:(id)a4 abuseControlConfig:(id)a5 featureWeights:(id)a6;
- (id)latestInfoSuggestionRelevantNowForSourceId:(id)a0;
- (long long)_clientModelTypeForInfoSuggestion:(id)a0;
- (BOOL)_areSuggestions:(id)a0 equalTo:(id)a1;

@end
