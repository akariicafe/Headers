@class PKRulerLayer, NSString, PKRulerView, UIView, UIImpactFeedbackGenerator, PKRulerGestureRecognizer;
@protocol PKRulerDelegate, PKRulerHostingDelegate;

@interface PKRulerController : NSObject <UIGestureRecognizerDelegate> {
    UIView *_rulerHostingView;
    BOOL _wantsSharedRuler;
    BOOL _isInteractingWithRuler;
    BOOL _rulerIsRotating;
    BOOL _rulerWasShownViaGesture;
    BOOL _canRulerSnapToAngle;
    BOOL _lastTouchWasMaskedByRuler;
    BOOL _lastDrawingWasMaskedByRuler;
    BOOL _lastDrawingWasSnappedToRuler;
    BOOL _rulerSnappedToAngle;
    PKRulerGestureRecognizer *_rulerGestureRecognizer;
    id<PKRulerDelegate> _delegate;
    id<PKRulerHostingDelegate> _rulerHostingDelegate;
    PKRulerView *_rulerView;
    PKRulerLayer *_rulerLayer;
    UIImpactFeedbackGenerator *_snapImpactBehavior;
    struct { int arcType; BOOL before; double snapAngle; } _rulerState;
    struct { int arcType; BOOL before; double snapAngle; } _previousRulerState;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _rulerStartTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _defaultRulerTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)rulerMoveGesture:(id)a0;
- (void)eatPencilGesture:(id)a0;

@end
