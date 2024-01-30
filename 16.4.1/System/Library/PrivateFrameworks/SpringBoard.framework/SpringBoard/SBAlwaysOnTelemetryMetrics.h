@class _SBMachContinuousStopwatch, NSMutableDictionary, NSMutableSet, NSNumber;

@interface SBAlwaysOnTelemetryMetrics : NSObject {
    NSMutableDictionary *_stopWatches;
    NSMutableDictionary *_stateChangeCounts;
    _SBMachContinuousStopwatch *_activeStopWatch;
    NSMutableSet *_presentationSources;
    unsigned long long _invalidatedFramesUpTo2mStale;
    unsigned long long _invalidatedFramesUpTo3mStale;
    unsigned long long _invalidatedFramesUpTo4mStale;
    unsigned long long _invalidatedFramesUpTo5mStale;
    unsigned long long _invalidatedFramesUpTo6mStale;
    unsigned long long _discardedFramesUpTo2mStale;
    unsigned long long _discardedFramesUpTo3mStale;
    unsigned long long _discardedFramesUpTo4mStale;
    unsigned long long _discardedFramesUpTo5mStale;
    unsigned long long _discardedFramesUpTo6mStale;
    unsigned long long _renderedFramesLessThan1Min;
    unsigned long long _renderedFrames1to2Min;
    unsigned long long _renderedFrames2to3Min;
    unsigned long long _renderedFrames3to4Min;
    unsigned long long _renderedFrames4to5Min;
    unsigned long long _renderedFrames5to6Min;
    unsigned long long _renderedFramesMoreThan6Min;
    unsigned long long _renderedFrameCount;
    unsigned long long _renderedPartialMinuteCount;
    NSNumber *_minimumAPL;
    NSNumber *_maximumAPL;
    NSNumber *_averageAPL;
    NSNumber *_minimumAPLDimming;
    NSNumber *_maximumAPLDimming;
    NSNumber *_averageAPLDimming;
}

- (id)init;
- (void)setBacklightState:(long long)a0;
- (void).cxx_destruct;
- (void)accumulateDiscardHistogram:(id)a0;
- (void)accumulateInvalidationHistogram:(id)a0;
- (void)accumulatePresentationSources:(id)a0;
- (void)accumulateRenderHistogram:(id)a0;
- (id)dataForAnalyticsEvent:(id)a0;
- (id)dataForPowerlogEvent:(id)a0;

@end
