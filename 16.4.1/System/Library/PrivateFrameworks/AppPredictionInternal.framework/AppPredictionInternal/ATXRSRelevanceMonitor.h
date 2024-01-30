@class NSArray, BPSSink, _PASSimpleCoalescingTimer, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXRSRelevanceMonitorDelegate;

@interface ATXRSRelevanceMonitor : NSObject {
    NSArray *_queue_candidates;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshCurrentlyRelevantCandidatesOperation;
    BMBiomeScheduler *_computedModeScheduler;
    BPSSink *_computedModeSink;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeSink;
}

@property (weak, nonatomic) id<ATXRSRelevanceMonitorDelegate> delegate;

- (void)_queue_startMonitoringDateRelevanceProviders:(id)a0;
- (BOOL)_isDateRelevanceSatisfied:(id)a0;
- (id)_earliestFutureDateAmongDateRelevanceProviders:(id)a0;
- (BOOL)_isBehavioralRelevanceSatisfiedForCandidate:(id)a0 currentMode:(unsigned long long)a1;
- (void)_coalescedRefreshCurrentlyRelevantCandidates;
- (void)_queue_clearAllCurrentMonitoring;
- (id)init;
- (void)resetToMonitorForRelevantWidgetCandidates:(id)a0;
- (void)_queue_refreshCurrentlyRelevantCandidates;
- (void)_queue_startMonitoringModeChanges;
- (void).cxx_destruct;
- (id)_nonnullEndDateOfDateRelevanceProvider:(id)a0;

@end
