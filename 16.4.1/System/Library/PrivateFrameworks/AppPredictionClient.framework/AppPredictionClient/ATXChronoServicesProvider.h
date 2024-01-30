@class CHSProactiveService, SBSWidgetMetricsService, _PASQueueLock;
@protocol ATXChronoServicesProviderDelegate;

@interface ATXChronoServicesProvider : NSObject {
    CHSProactiveService *_proactiveService;
    SBSWidgetMetricsService *_widgetMetricService;
    _PASQueueLock *_lock;
}

@property (weak, nonatomic) id<ATXChronoServicesProviderDelegate> delegate;

- (void)_chronoDidReplyHandle:(id)a0 timelineEntries:(id)a1 forWidget:(id)a2 withError:(id)a3;
- (void)_updateGuardedData:(id)a0 withNewCachedSuggestions:(id)a1;
- (void)_removeOudatedFailureEntriesInGuardedData:(id)a0;
- (void)_updateAndSendHomeScreenSuggestionsToDelegateWithGuardedData:(id)a0;
- (BOOL)_isCurrentTimelineRelevanceScoreNonPositiveForEntries:(id)a0;
- (BOOL)_shouldBlockSuggestionForWidget:(id)a0 entries:(id)a1;
- (id)_widgetFromSuggestionLayout:(id)a0;
- (id)init;
- (void)_requestChronoToLoadWidget:(id)a0 inGuardedData:(id)a1;
- (id)initWithProactiveService:(id)a0 widgetMetricsService:(id)a1;
- (BOOL)_allReloadsAreCompletedInGuardedData:(id)a0;
- (void)resetToPrewarmWidgetsInSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)_recordFromSuggestionLayout:(id)a0 guardedData:(id)a1;

@end
