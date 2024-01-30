@class VKTimedAnimation, NSString, VKAnnotationTrackingCameraController, VKGestureCameraBehavior, VKCameraRegionRestriction;
@protocol VKTrackableAnnotation;

@interface VKScreenCameraController : VKCameraController <VKAnnotationTrackingCameraController, VKGesturingCameraController> {
    VKTimedAnimation *_zoomAnimation;
    VKTimedAnimation *_pitchAnimation;
    VKTimedAnimation *_rotationAnimation;
    VKTimedAnimation *_regionAnimation;
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;
    BOOL _isPitchIncreasing;
}

@property (nonatomic) BOOL userChangedZoomSinceLastProgrammaticRegionChange;
@property (nonatomic) struct { double min; double max; } centerCoordinateDistanceRange;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;
@property (nonatomic) struct { BOOL shouldZoomToFit; double idealCenterCoordinateDistance; BOOL shouldPreserveUserSpecifiedZoomLevel; BOOL resetAfterTracking; } annotationTrackingBehavior;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (readonly, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
@property (readonly, nonatomic) id<VKTrackableAnnotation> trackingAnnotation;
@property (readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property (readonly, nonatomic) BOOL isAnimatingToTrackAnnotation;
@property (readonly, nonatomic) BOOL isTrackingHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopSnappingAnimations;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void)clampZoomLevelIfNecessary;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 newValue:(double)a1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateState;
- (void)enter3DMode;
- (long long)tileSize;
- (void)zoom:(double)a0 withFocusPoint:(struct CGPoint { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)startPanningAtPoint:(struct CGPoint { double x0; double x1; })a0 panAtStartPoint:(BOOL)a1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)stopRegionAnimation;
- (BOOL)snapMapIfNecessary:(BOOL)a0;
- (BOOL)canEnter3DMode;
- (void)updatePanWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)exit3DMode;
- (void)stopPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)panWithOffset:(struct CGPoint { double x0; double x1; })a0 relativeToScreenPoint:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 duration:(double)a3 completionHandler:(id /* block */)a4;
- (BOOL)tapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)stopAnimations;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)durationToAnimateToMapRegion:(id)a0;
- (void)startTrackingAnnotation:(id)a0 trackHeading:(BOOL)a1 animated:(BOOL)a2 duration:(double)a3 timingFunction:(id /* block */)a4;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3 duration:(double)a4 animationStyle:(long long)a5 timingCurve:(id /* block */)a6 completion:(id /* block */)a7;
- (void)stopTrackingAnnotation;
- (BOOL)isAnimating;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)transferGestureState:(id)a0;
- (void)setCenterCoordinateDistanceRange:(struct { double x0; double x1; })a0 duration:(double)a1 timingFunction:(id /* block */)a2;
- (void)setYaw:(double)a0 animated:(BOOL)a1;
- (void)setMapRegion:(id)a0 pitch:(double)a1 yaw:(double)a2 duration:(double)a3 timingCurve:(id /* block */)a4 completion:(id /* block */)a5;
- (void)setCenterCoordinate3D:(struct { double x0; double x1; double x2; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3 duration:(double)a4 animationStyle:(long long)a5 timingCurve:(id /* block */)a6 completion:(id /* block */)a7;
- (void)setRegionRestriction:(id)a0 duration:(double)a1 timingFunction:(id /* block */)a2;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (id)initWithMapDataAccess:(struct MapDataAccess { } *)a0 animationRunner:(struct AnimationRunner { } *)a1 runLoopController:(struct RunLoopController { } *)a2 cameraDelegate:(id)a3;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera *x0; struct __shared_weak_count *x1; })a0;
- (void)dealloc;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })a0;
- (void)setVkCamera:(id)a0;

@end
