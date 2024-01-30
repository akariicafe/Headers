@class SBInteractiveScreenshotSettings;

@interface SBInteractiveScreenshotScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer {
    SBInteractiveScreenshotSettings *_settings;
    long long _touchInterfaceOrientationWhenGestureBegan;
}

+ (BOOL)_shouldSupportStylusTouches;
+ (id)interactiveScreenshotScreenEdgePanGestureRecognizerWithTarget:(id)a0 action:(SEL)a1;

- (BOOL)shouldReceiveTouch:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (void)reset;
- (BOOL)_isOrientedLocation:(struct CGPoint { double x0; double x1; })a0 inCorner:(unsigned long long)a1 forOrientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withEdgeOffsets:(struct UIOffset { double x0; double x1; })a3;
- (void)setState:(long long)a0;
- (long long)_touchInterfaceOrientation;

@end
