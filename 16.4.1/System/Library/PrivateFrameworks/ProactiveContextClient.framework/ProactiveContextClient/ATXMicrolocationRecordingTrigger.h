@class BMUserFocusComputedModeStream, CLLocationManager, BPSSink, _PASSimpleCoalescingTimer, BMInferredModeStream, NSObject, BMBiomeScheduler;
@protocol OS_dispatch_queue;

@interface ATXMicrolocationRecordingTrigger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescingTimerForRecordingScans;
    _PASSimpleCoalescingTimer *_coalescingTimerForHistoricalLabelDonations;
    BMInferredModeStream *_inferredModeStream;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeStreamSink;
    BMUserFocusComputedModeStream *_userFocusComputedModeStream;
    BMBiomeScheduler *_userComputedModeScheduler;
    BPSSink *_userComputedModeStreamSink;
    CLLocationManager *_locationManager;
    double _timeBuffer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isUserFocusComputedModeEventEligibleForMicrolocationRecording:(id)a0;
- (void)_donateTruthLabelForTriggerUUID:(id)a0 truthLabel:(id)a1;
- (BOOL)_isInferredModeEventEligibleForHistoricalLabelDonations:(id)a0;
- (BOOL)_isInferredModeEventEligibleForMicrolocationRecording:(id)a0;
- (BOOL)_isUserFocusComputedModeEventEligibleForHistoricalLabelDonations:(id)a0;
- (id)_schedulerForStreamName:(id)a0;
- (void)_subscribeToModeChanges;
- (void)_subscribeToStreamWithPublisher:(id)a0 scheduler:(id)a1 sink:(id)a2;
- (void)_triggerHistoricalLabelDonationAtModeEndWithStoreEvent:(id)a0;
- (void)_triggerMicroLocationHistoricalLabelDonationWithStartDate:(id)a0 endDate:(id)a1;
- (id)_triggerMicroLocationRecordingScan;
- (void)_triggerMicrolocationRecordingAtModeStartWithStoreEvent:(id)a0;
- (id)_truthLabelForMode:(unsigned long long)a0;
- (void)_userDidEnterModeOrModeWasPredicted;
- (void)_userDidExitModeOrModeWasNoLongerPredicted;
- (id)initWithInferredModeStream:(id)a0 locationManager:(id)a1;

@end
