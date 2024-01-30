@class BMUserFocusComputedModeStream, ATXDNDModeConfigurationClient, NSDictionary;

@interface ATXModeTransitionMetricsLogUploader : NSObject {
    BMUserFocusComputedModeStream *_modeTransitionStream;
    ATXDNDModeConfigurationClient *_client;
    NSDictionary *_modeConfigurations;
}

- (id)init;
- (void).cxx_destruct;
- (void)_logModeTransitionMetricWithPreviousModeStart:(id)a0 previousModeEnd:(id)a1 currentModeStart:(id)a2 matchingPreviousInferredModeEvent:(id)a3 matchingCurrentInferredModeEvent:(id)a4;
- (void)_logWithPreviousInferredModeEvent:(id)a0 currentInferredModeEvent:(id)a1 withDuration:(id)a2;
- (id)_modeTransitionBookmark;
- (void)_populateInferredModeFieldsOnTheModeTransitionMetric:(id)a0 withPreviousInferredModeEvent:(id)a1 currentInferredModeEvent:(id)a2 duration:(id)a3;
- (BOOL)_previousModeEndEvent:(id)a0 isContiguousWithModeStartEvent:(id)a1;
- (id)_timeBasedMergedPublisher;
- (id)initWithModeTransitionStream:(id)a0;
- (id)matchingInferredModeEvent:(id)a0 inferredModeEvents:(id)a1;
- (id)processInferredModeEvents:(id)a0 beforeTimestamp:(double)a1;
- (void)uploadLogsToCoreAnalyticsWithXPCActivity:(id)a0;

@end
