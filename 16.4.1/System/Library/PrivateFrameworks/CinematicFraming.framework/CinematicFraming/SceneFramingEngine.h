@class CinematicFramingSessionFramingParameters, CinematicFramingSessionOptions;
@protocol FramingSpaceManager;

@interface SceneFramingEngine : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentTargetViewport;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFrameWithDetectionsTimestamp;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _deadband;
    BOOL _lastFrameHadSubjects;
    unsigned short _framingState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _subjectRectHistoryBuffer[10];
    unsigned short _subjectRectHistoryCount;
    unsigned short _subjectRectHistoryHeadIdx;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _subjectRectHistoryUpdateTime;
    BOOL _subjectRectStationary;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _subjectRectStationaryTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _driftStartDeadband;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _driftStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _driftEndTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _recenterStartDeadband;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recenterStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recenterEndTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _returningHomeStartTime;
    void /* unknown type, empty encoding */ _returningHomeStartRect;
    void /* unknown type, empty encoding */ _returningHomeTargetRect;
    CinematicFramingSessionFramingParameters *_activeFramingParameters;
    id<FramingSpaceManager> _framingSpaceManager;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentTargetViewport;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultViewport;
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (retain, nonatomic) CinematicFramingSessionFramingParameters *activeFramingParameters;

- (void).cxx_destruct;
- (void)reset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateBaselineViewportForTracks:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateSubjectEnclosingRectangleForTracks:(id)a0 withBaselineWidth:(float)a1 userViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 maxSubjectRelativeWidthOut:(float *)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateViewportCenteredAround:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withWidth:(float)a1;
- (float)calculateViewportWidthToFitSubjectsInDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearSubjectHistory;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCroppedSubjectEnclosingRectForViewportWidth:(float)a0 subjectEnclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDeadbandFromViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)computeDeadbandHeightForWidth:(float)a0;
- (float)computeDeadbandHeightFromViewportHeight:(float)a0;
- (float)computeDeadbandWidthForHeight:(float)a0;
- (float)computeDeadbandWidthFromViewportWidth:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeViewportFromDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)computeViewportWidthFromDeadbandWidth:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })determineDeadbandForSubjectEnclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newDeadbandWidth:(float)a2;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; float x3; })determineSceneFramingForTracks:(id)a0 userViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; float x3; })determineSceneSummaryForTracks:(id)a0 userViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; float x3; })determineTemporallyStableTargetCropForTracks:(id)a0 userViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithFramingSpaceManager:(id)a0;
- (BOOL)isCurrentFramingIdeal:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTolerance:(float)a1;
- (BOOL)isSubjectRectStationary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)minAllowedDeadbandWidth;
- (float)minAllowedScreenWidth;
- (void)transitionToFramingState:(unsigned short)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateDeadbandToFitScene:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; float x3; })a0 tracks:(id)a1 userViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)updateDeadbandWithSubjectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 idealDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 slackDeadband:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)updateSubjectMovement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
