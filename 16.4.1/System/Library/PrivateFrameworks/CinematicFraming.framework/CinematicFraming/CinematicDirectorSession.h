@class CinematicTracker, NSString, SceneFramingEngine, NSObject, CinematicFramingSessionOptions;
@protocol RectangleAnimator, FramingSpaceManager;

@interface CinematicDirectorSession : NSObject <CinematicTrackerDelegate> {
    NSObject<RectangleAnimator> *_rectangleAnimator;
    SceneFramingEngine *_sceneFramingEngine;
    id<FramingSpaceManager> _framingSpaceManager;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetView;
    CinematicTracker *_tracker;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastJumpCutTimestamp;
    CinematicFramingSessionOptions *_options;
    long long _sceneState;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSceneStateTransitionTime;
    BOOL _eventHappenedThisFrame;
    unsigned int _numProcessedFrames;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) float zoomLevel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraViewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)computeSceneFramingForMetadata:(id)a0;
- (void)cinematicTracker:(id)a0 didTrackBecomeStationaryFirstTime:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)cinematicTracker:(id)a0 didTrackEnter:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)cinematicTracker:(id)a0 didTrackLeave:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void /* unknown type, empty encoding */)computeFocusPoint;
- (float)computeSubjectOccupancyFraction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeSubjectRectangle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeTargetViewport:(id)a0;
- (void)handleMovingSceneForMetadata:(id)a0 activeStationaryTracks:(id)a1 activeMovingTracks:(id)a2 validTracks:(id)a3;
- (void)handleStationarySceneForMetadata:(id)a0 activeStationaryTracks:(id)a1 activeMovingTracks:(id)a2 validTracks:(id)a3;
- (id)initWithFramingSpaceManager:(id)a0;
- (void)reframeOnTracks:(id)a0 withMetadata:(id)a1;
- (void)resetCameraViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)secondsInCurrentStateAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateStateTo:(long long)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
