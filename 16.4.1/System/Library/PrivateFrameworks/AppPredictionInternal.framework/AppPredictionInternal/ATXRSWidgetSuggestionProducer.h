@class ATXRSFilter, ATXInformationDescendingStartDateRanker, ATXClientModelSuggestionReceiver, NSObject, ATXRSRelevanceMonitor, ATXWidgetSuggestionAbuseGuard, _ATXDuetHelper, ATXWidgetDescriptorCache, NSString, ATXInformationFeatureWeights, ATXInformationFeaturizer, ATXInfoToBlendingConfidenceMapper, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface ATXRSWidgetSuggestionProducer : NSObject <ATXRSRelevanceMonitorDelegate> {
    _ATXDuetHelper *_duetHelper;
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXRSRelevanceMonitor *_relevanceMonitor;
    ATXRSFilter *_filter;
    ATXWidgetSuggestionAbuseGuard *_abuseGuard;
    ATXInformationFeaturizer *_featurizer;
    ATXInformationFeatureWeights *_featureWeights;
    ATXInformationDescendingStartDateRanker *_ranker;
    ATXInfoToBlendingConfidenceMapper *_confidenceMapper;
    ATXClientModelSuggestionReceiver *_suggestionReceiver;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshRelevantShortcutsOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_clientModelIdentifier;
+ (id)replacementContainerBundleIdForDonationBundleId:(id)a0;

- (void)_coalescedRefreshRelevantShortcuts:(id)a0;
- (id)_candidatesFromRelevantShortcutToBundleIdDict:(id)a0;
- (void)_pushSuggestionsToBlendingIfNecessary:(id)a0;
- (void)relevanceMonitorDidUpdateCurrentlyRelevantCandidates:(id)a0 relevanceProviders:(id)a1;
- (void)_refreshRelevantShortcuts;
- (id)init;
- (id)_infoSuggestionFromCandidate:(id)a0 suggestionIdentifier:(id)a1;
- (id)_proactiveSuggestionsFromScoredInfoSuggestions:(id)a0;
- (id)initWithDuetHelper:(id)a0 descriptorCache:(id)a1 relevanceMonitor:(id)a2 filter:(id)a3 abuseGuard:(id)a4 featurizer:(id)a5 featureWeights:(id)a6 ranker:(id)a7 confidenceMapper:(id)a8 suggestionReceiver:(id)a9;
- (void).cxx_destruct;
- (BOOL)_areInfoSuggestions:(id)a0 equalToProactiveSuggestions:(id)a1;

@end
