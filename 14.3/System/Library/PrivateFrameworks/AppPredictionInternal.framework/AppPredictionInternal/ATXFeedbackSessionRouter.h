@class NSDictionary, ATXBlendingLayerHyperParameters, NSMutableArray, NSObject;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue;

@interface ATXFeedbackSessionRouter : NSObject {
    NSDictionary *_feedbackListeners;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *clientModelResults;

+ (id)_executableToSuggestionMappingFromSuggestions:(id)a0;
+ (id)_uuidToSuggestionMappingForSuggestionsInFeedbackSession:(id)a0 clientModelCacheUpdates:(id)a1;
+ (id)_suggestionsFromClientModelEqualToSuggestionsFromSessionWithUUIDs:(id)a0 sessionUUIDToProactiveSuggestionMapping:(id)a1 clientModelExecutableMapping:(id)a2;
+ (BOOL)_shouldProcessFeedbackSession:(id)a0;
+ (id)_clientModelIdToFeedbackListenersMapping:(id)a0;

- (void)logSessionEngagementMetricsForFeedbackSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)logFeedbackRecordedEngagementTypesForSession:(id)a0;
- (void)logClientModelUICacheAgeMetricForFeedbackSession:(id)a0 uiContext:(id)a1;
- (id)_predictionTimeContextWithDate:(id)a0;
- (void)logClientModelClientCacheAgeMetricForClientModelResult:(id)a0 uiContext:(id)a1;
- (void)processFeedbackResultForSession:(id)a0 uiContext:(id)a1;
- (id)initWithClientModelFeedbackListeners:(id)a0 hyperParameters:(id)a1 tracker:(id)a2;
- (void)logClientModelEngagementMetricsForClientModelResult:(id)a0 uiContext:(id)a1;
- (id)clientModelIdsAcceptingFeedback;

@end
