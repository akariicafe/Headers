@class NSDictionary, ATXBlendingLayerHyperParameters, NSMutableArray, NSObject;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue;

@interface ATXFeedbackSessionRouter : NSObject {
    NSDictionary *_feedbackListeners;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *clientModelResults;

+ (id)_clientModelIdToFeedbackListenersMapping:(id)a0;
+ (BOOL)_shouldProcessFeedbackSession:(id)a0;
+ (id)_uuidToSuggestionMappingForSuggestionsInFeedbackSession:(id)a0 clientModelCacheUpdates:(id)a1;
+ (id)_executableToSuggestionMappingFromSuggestions:(id)a0;
+ (id)_suggestionsFromClientModelEqualToSuggestionsFromSessionWithUUIDs:(id)a0 sessionUUIDToProactiveSuggestionMapping:(id)a1 clientModelExecutableMapping:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithClientModelFeedbackListeners:(id)a0 hyperParameters:(id)a1 tracker:(id)a2;
- (id)_predictionTimeContextWithDate:(id)a0;
- (void)logFeedbackRecordedEngagementTypesForSession:(id)a0;
- (id)clientModelIdsAcceptingFeedback;
- (void)processFeedbackResultForSession:(id)a0 uiContext:(id)a1;

@end
