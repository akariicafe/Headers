@class VKTimedAnimation;

@interface VKMapGestureCameraController : VKGestureCameraBehavior {
    struct CGPoint { double x; double y; } _panLastScreenPoint;
    BOOL _isPitchIncreasing;
    double _beganPitch;
    double _currentPitch;
    VKTimedAnimation *_zoomAnimation;
}

- (struct Matrix<double, 3, 1> { double x0[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x0[3]; })a0;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct Matrix<double, 3, 1> { double x0[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x0[3]; })a0 delta:(struct Matrix<double, 3, 1> { double x0[3]; })a1;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (BOOL)isPitchIncreasing;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })a0;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void).cxx_destruct;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;

@end
