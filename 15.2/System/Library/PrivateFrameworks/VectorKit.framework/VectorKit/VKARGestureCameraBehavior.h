@class VKARCameraController;

@interface VKARGestureCameraBehavior : VKGestureCameraBehavior {
    VKARCameraController *_arCameraController;
    struct Geocentric<double> { double _e[3]; } _startPanPosition;
}

- (void)beginPan:(struct CGPoint { double x0; double x1; })a0;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithARCameraController:(id)a0;
- (void)dealloc;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (id).cxx_construct;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;

@end
