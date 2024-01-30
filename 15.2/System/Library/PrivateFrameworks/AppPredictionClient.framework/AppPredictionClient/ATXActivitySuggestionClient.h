@class BMInferredModeStream, BMBiomeScheduler, NSHashTable, _PASSimpleCoalescingTimer, NSObject, ATXActivitySuggestionFeedbackStream, BPSSink, RTRoutineManager, CLCircularRegion;
@protocol OS_dispatch_queue;

@interface ATXActivitySuggestionClient : NSObject {
    BMInferredModeStream *_inferredModeStream;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    _PASSimpleCoalescingTimer *_coalescingTimer;
    RTRoutineManager *_routineManager;
}

@property (retain) CLCircularRegion *workRegion;
@property (retain) CLCircularRegion *homeRegion;

+ (id)sharedInstance;
+ (Class)DNDModeConfigurationTriggerClassFromATXTrigger:(id)a0;
+ (Class)ATXTriggerClassFromDNDModeConfigurationTrigger:(id)a0;

- (BOOL)_activityIsEligibleForSetUpSuggestion:(id)a0;
- (id)localizedSuggestionReasonForBMInferredModeEvent:(id)a0;
- (id)_activityForEvent:(id)a0;
- (id)currentSuggestion;
- (void)userDidAcceptActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidFinishActivitySetUpWithSuggestionUUID:(id)a0 acceptedTriggers:(id)a1 location:(unsigned long long)a2;
- (void)_logFeedbackEventForActivitySetUpSuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 acceptedTriggers:(id)a2 location:(unsigned long long)a3;
- (void)registerObserver:(id)a0;
- (void)_modeDidChange;
- (void)removeObserver:(id)a0;
- (void)userDidRejectActivitySuggestion:(id)a0;
- (void)currentSuggestionWithCompletionHandler:(id /* block */)a0;
- (void)userDidAcceptActivitySuggestion:(id)a0 acceptedTriggers:(id)a1;
- (BOOL)_shouldSendModeSetUpSuggestionAtEndOfModeToLockScreen:(id)a0;
- (void)userDidAcceptConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)triggersToDNDModeConfigurationTriggers:(id)a0;
- (id)suggestionWithUUID:(id)a0;
- (void)_logFeedbackEventForConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 location:(unsigned long long)a2;
- (void)userDidRejectConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (BOOL)_shouldSendAutomationSuggestionForMode:(unsigned long long)a0;
- (void)_setUpPublisherIfNecessary;
- (void)_fetchAndCacheLOIs;
- (void).cxx_destruct;
- (void)userDidStopActivity:(id)a0 location:(unsigned long long)a1;
- (void)didShowTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)_logFeedbackEventForSuggestionUUID:(id)a0 suggestionType:(unsigned long long)a1 eventType:(unsigned long long)a2 acceptedTriggers:(id)a3 location:(unsigned long long)a4;
- (id)init;
- (void)didShowConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)_logFeedbackEventForTriggerSuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 acceptedTriggers:(id)a2 location:(unsigned long long)a3;
- (id)initWithRoutineManager:(id)a0;
- (id)DNDModeConfigurationTriggersToATXTriggers:(id)a0;
- (void)userDidSeeConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidSeeTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)addObserver:(id)a0 sendingInitialChangeNotification:(BOOL)a1;
- (void)userDidSeeActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (BOOL)_shouldSendModeTriggerSuggestionAtEndOfModeToLockScreen:(id)a0;
- (void)dealloc;
- (void)userDidAcceptTriggerSuggestionWithSuggestionUUID:(id)a0 acceptedTriggers:(id)a1 location:(unsigned long long)a2;
- (void)userDidStartActivity:(id)a0 location:(unsigned long long)a1;
- (id)_suggestionWithActivity:(id)a0;
- (void)didShowActivitySuggestion:(id)a0;
- (void)userDidRejectActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)registerObserver:(id)a0 sendingInitialChangeNotification:(BOOL)a1;
- (BOOL)_activityIsEligibleForTriggerSuggestion:(id)a0;
- (id)previousSuggestion;
- (void)didShowActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidRejectTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;

@end
