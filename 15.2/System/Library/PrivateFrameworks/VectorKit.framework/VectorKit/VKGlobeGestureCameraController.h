@interface VKGlobeGestureCameraController : VKGestureCameraBehavior {
    void *_globeView;
    void *_cameraManager;
    double _beganDoublePanPitch;
    double _currentDoublePanPitch;
    BOOL _isPitchIncreasing;
}

- (void)setGlobeView:(void *)a0;
- (void)endPitch:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })a0;
- (void)beginZoom:(struct CGPoint { double x0; double x1; })a0;
- (void)endPan:(struct CGPoint { double x0; double x1; })a0;
- (void)beginPan:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPitchIncreasing;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)beginRotate:(struct CGPoint { double x0; double x1; })a0;
- (void)setCameraManager:(void *)a0;
- (void)endZoom:(struct CGPoint { double x0; double x1; })a0;
- (void)endRotate:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;

@end
