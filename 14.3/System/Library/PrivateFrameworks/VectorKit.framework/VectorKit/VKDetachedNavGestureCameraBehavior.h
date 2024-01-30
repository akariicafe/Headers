@class NSString, VKNavCameraController, VKTimedAnimation;

@interface VKDetachedNavGestureCameraBehavior : VKGestureCameraBehavior <VKNavGestureCameraBehavior> {
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    struct Unit<RadianUnitDescription, double> { double _value; } _startPitch;
    VKTimedAnimation *_tapZoomAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void)dealloc;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (id)initWithNavCameraController:(id)a0;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)tapZoom:(struct CGPoint { double x0; double x1; })a0 levels:(double)a1 completionHandler:(id /* block */)a2;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })a0;
- (id).cxx_construct;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;

@end
