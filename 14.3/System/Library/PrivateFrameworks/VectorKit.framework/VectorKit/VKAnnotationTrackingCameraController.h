@class VKTimedAnimation;
@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

@interface VKAnnotationTrackingCameraController : VKCameraController {
    id<VKTrackableAnnotationPresentation> _annotationPresentation;
    VKTimedAnimation *_currentAnimation;
    struct Matrix<double, 3, 1> { double _e[3]; } _currentAnimationStartPoint;
    struct Matrix<double, 3, 1> { double _e[3]; } _currentAnimationStartCameraPosition;
    struct Matrix<double, 3, 1> { double _e[3]; } _currentAnimationEndPoint;
    struct Matrix<double, 3, 1> { double _e[3]; } _currentAnimationEndCameraPosition;
    double _pendingChangeDuration;
    VKTimedAnimation *_currentHeadingAnimation;
    double _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    struct { unsigned char hasPendingChange : 1; unsigned char paused : 1; unsigned char trackingHeading : 1; unsigned char hasPendingHeadingChange : 1; unsigned char isInitialRegionChange : 1; unsigned char isJumpingToAnnotation : 1; unsigned char annotationImplementsAccuracy : 1; unsigned char annotationImplementsHasValidHeading : 1; unsigned char annotationImplementsHeading : 1; unsigned char annotationImplementsExpectedCoordinateUpdateInterval : 1; unsigned char annotationImplementsExpectedHeadingUpdateInterval : 1; } _flags;
}

@property (nonatomic) struct { BOOL shouldZoomToFit; double idealCenterCoordinateDistance; BOOL shouldPreserveUserSpecifiedZoomLevel; BOOL resetAfterTracking; } behavior;
@property (nonatomic) long long headingAnimationDisplayRate;
@property (nonatomic) BOOL hasUserSpecifiedZoomLevel;
@property (readonly, nonatomic) BOOL shouldForceZoomToFit;
@property (readonly, nonatomic) id<VKTrackableAnnotation> annotation;
@property (readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;

- (void)setGesturing:(BOOL)a0;
- (void)stopTrackingAnnotation;
- (void)pauseAnimation;
- (void)dealloc;
- (id)initWithMapDataAccess:(struct MapDataAccess { } *)a0 animationRunner:(struct AnimationRunner { } *)a1 runLoopController:(struct RunLoopController { struct MapEngine *x0; long long x1; long long x2; } *)a2 cameraDelegate:(id)a3;
- (void)_goToAnnotationAnimated:(BOOL)a0 duration:(double)a1 timingFunction:(id /* block */)a2 isInitial:(BOOL)a3;
- (void)_rotateToHeadingAnimated:(BOOL)a0 duration:(double)a1;
- (void)updateFramerate;
- (BOOL)isAnimating;
- (id).cxx_construct;
- (void)startTrackingAnnotation:(id)a0 trackHeading:(BOOL)a1 animated:(BOOL)a2 duration:(double)a3 timingFunction:(id /* block */)a4;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resumeAnimation;

@end
