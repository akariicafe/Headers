@class PXStoryModel, NSString, _PXStoryPacingControllerDecisionHistory, _PXStoryPacingControllerChangeOrigin;
@protocol PXStoryPacingCueSource, PXStoryPacingTimeSource;

@interface PXStoryPacingController : PXStoryController <PXStoryPacingTimeSourceDelegate, PXStoryMutablePacingController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider>

@property (nonatomic) BOOL canChangePlaybackTime;
@property (retain, nonatomic) NSString *reasonPreventingPlaybackTimeChange;
@property (readonly, nonatomic) _PXStoryPacingControllerChangeOrigin *modelChangeOrigin;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetEndTime;
@property (retain, nonatomic) NSString *targetEndUpdateReason;
@property (retain, nonatomic) _PXStoryPacingControllerDecisionHistory *pacingDecisionHistory;
@property (nonatomic) long long timelineVersion;
@property (readonly, nonatomic) struct { long long segmentIdentifier; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } allowedTimeRange; struct { long long value; int timescale; unsigned int flags; long long epoch; } originalDuration; struct { long long value; int timescale; unsigned int flags; long long epoch; } adjustedDuration; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; long long rank; } cue; long long cueVersion; struct { long long value; int timescale; unsigned int flags; long long epoch; } cueTime; double startTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } startTimeIntoSegment; long long timelineVersion; char transitionKind; struct { long long value; int timescale; unsigned int flags; long long epoch; } transitionCorrection; } currentPacingDecision;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) id<PXStoryPacingTimeSource> timeSource;
@property (readonly, weak, nonatomic) id<PXStoryPacingCueSource> cueSource;
@property (readonly, nonatomic) BOOL isActive;

- (void)setIsActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)_handleTimelineDidChange;
- (void)_invalidateCanChangePlaybackTime;
- (void)_invalidateCurrentPacingDecision;
- (void)_invalidateTargetEndTimeWithReason:(id)a0;
- (void)_updateCanChangePlaybackTime;
- (void)_updateTargetEndTime;
- (void)configureUpdater:(id)a0;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithModel:(id)a0 timeSource:(id)a1 cueSource:(id)a2;
- (id)initWithObservableModel:(id)a0;
- (void)setCurrentPacingDecision:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x4; long long x5; struct { long long x0; int x1; unsigned int x2; long long x3; } x6; double x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; long long x9; char x10; struct { long long x0; int x1; unsigned int x2; long long x3; } x11; })a0;
- (void)timeSource:(id)a0 didIncrementByTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
