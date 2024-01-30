@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject

@property (readonly, nonatomic) _UIMotionAnalyzerSettings *settings;
@property (readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose;

- (id)initWithSettings:(id)a0;
- (id)init;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)a0 timeSinceLastNewMotionEvent:(double)a1 slowUpdatesEnabled:(BOOL)a2 returningShouldToggleSlowUpdates:(BOOL *)a3 logger:(id)a4;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)updateWithEvent:(id)a0;
- (void)resetHysteresis;
- (void)updateHistory;

@end
