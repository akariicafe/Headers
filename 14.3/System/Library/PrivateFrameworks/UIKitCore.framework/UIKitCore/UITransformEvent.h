@class NSMapTable;

@interface UITransformEvent : UIEvent {
    NSMapTable *_gestureRecognizersByWindow;
    struct CGPoint { double x; double y; } _sceneReferenceLocation;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    double _scaleDelta;
    double _rotationDelta;
    double _translationMagDelta;
    unsigned long long _scalePhase;
    unsigned long long _rotationPhase;
    unsigned long long _translationPhase;
}

@property (readonly) unsigned long long phase;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;

- (void)_reset;
- (id)_windows;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (long long)subtype;
- (long long)weightedDominantComponentForScaleWeight:(double)a0 rotationWeight:(double)a1 translationWeight:(double)a2;
- (void)_removeGestureRecognizersFromWindows;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_removeGestureRecognizer:(id)a0;
- (id)_windowServerHitTestWindow;
- (long long)type;
- (id)_init;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)_gestureRecognizersForWindow:(id)a0;

@end
