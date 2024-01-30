@class NSString, VKCameraController;

@interface VKGestureCameraBehavior : NSObject <VKGesturingCameraController> {
    BOOL _pinching;
    struct CGPoint { double x; double y; } _pinchStartFocusPoint;
    BOOL _panning;
    struct CGPoint { double x; double y; } _panStartFocusPoint;
    struct CGPoint { double x; double y; } _panStartScreenPoint;
    struct CGPoint { double x; double y; } _panLastScreenPoint;
    BOOL _rotating;
    struct CGPoint { double x; double y; } _rotateStartFocusPoint;
    double _lastRotation;
    BOOL _shouldRotationRubberband;
    BOOL _pitching;
    struct CGPoint { double x; double y; } _pitchStartFocusPoint;
    struct CGPoint { double x; double y; } _pitchStartScreenPoint;
    BOOL _notifyCameraStateChanges;
    VKCameraController *_cameraController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePitchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (id)initWithCameraController:(id)a0;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 newValue:(double)a1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)tapZoom:(struct CGPoint { double x0; double x1; })a0 levels:(double)a1 completionHandler:(id /* block */)a2;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPitching;
- (void)zoom:(double)a0 withFocusPoint:(struct CGPoint { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)startPanningAtPoint:(struct CGPoint { double x0; double x1; })a0 panAtStartPoint:(BOOL)a1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePanWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)stopPanningAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPanning;
- (void)endPitch:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)tapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })a0;
- (void)beginZoom:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endPan:(struct CGPoint { double x0; double x1; })a0;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)beginPan:(struct CGPoint { double x0; double x1; })a0;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)transferGestureState:(id)a0;
- (BOOL)isRotating;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)beginRotate:(struct CGPoint { double x0; double x1; })a0;
- (void)endZoom:(struct CGPoint { double x0; double x1; })a0;
- (void)endRotate:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (BOOL)isGesturing;
- (void)dealloc;
- (BOOL)isPinching;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;

@end
