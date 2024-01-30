@class NSArray, BPSSink, _PASSimpleCoalescingTimer, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXRSRelevanceMonitorDelegate;

@interface ATXRSRelevanceMonitor : NSObject {
    NSArray *_candidates;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshCurrentlyRelevantCandidatesOperation;
    BMBiomeScheduler *_computedModeScheduler;
    BPSSink *_computedModeSink;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeSink;
}

@property (weak, nonatomic) id<ATXRSRelevanceMonitorDelegate> delegate;

- (id)_nonnullEndDateOfDateRelevanceProvider:(id)a0;
- (void)_coalescedRefreshCurrentlyRelevantCandidates;
- (BOOL)_isBehavioralRelevanceSatisfiedForCandidate:(id)a0 currentMode:(unsigned long long)a1;
- (void)_clearAllCurrentMonitoring;
- (void)_refreshCurrentlyRelevantCandidates;
- (void)_startMonitoringModeChanges;
- (id)_earliestFutureDateAmongDateRelevanceProviders:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_startMonitoringDateRelevanceProviders:(id)a0;
- (BOOL)_isDateRelevanceSatisfied:(id)a0;
- (void)resetToMonitorForRelevantWidgetCandidates:(id)a0;

@end
