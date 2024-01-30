@class BMUserFocusComputedModeStream;

@interface ATXModeTransitionMetricsLogUploader : NSObject {
    BMUserFocusComputedModeStream *_modeTransitionStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithModeTransitionStream:(id)a0;
- (id)_modeTransitionBookmark;
- (void)_logModeTransitionMetricWithPreviousModeStart:(id)a0 previousModeEnd:(id)a1 currentModeStart:(id)a2;
- (BOOL)_previousModeEndEvent:(id)a0 isContiguousWithModeStartEvent:(id)a1;
- (void)uploadLogsToCoreAnalyticsWithXPCActivity:(id)a0;

@end
