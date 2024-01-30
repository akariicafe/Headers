@class NSMapTable, NSMutableArray;
@protocol UIWebTouchEventsGestureRecognizerDelegate;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
    id _touchTarget;
    SEL _touchAction;
    id<UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
    BOOL _passedHitTest;
    BOOL _isPotentialTap;
    BOOL _wasExplicitlyCancelled;
    double _originalGestureDistance;
    double _originalGestureAngle;
    struct _UIWebTouchEvent { int type; double timestamp; struct CGPoint { double x; double y; } locationInScreenCoordinates; struct CGPoint { double x; double y; } locationInDocumentCoordinates; double scale; double rotation; BOOL inJavaScriptGesture; struct _UIWebTouchPoint *touchPoints; unsigned int touchPointCount; BOOL isPotentialTap; } _lastTouchEvent;
}

@property (nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented;
@property (readonly, nonatomic) const struct _UIWebTouchEvent { int x0; double x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; double x4; double x5; BOOL x6; struct _UIWebTouchPoint *x7; unsigned int x8; BOOL x9; } *lastTouchEvent;
@property (readonly, nonatomic, getter=isDispatchingTouchEvents) BOOL dispatchingTouchEvents;
@property (readonly, nonatomic) NSMapTable *activeTouchesByIdentifier;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } locationInWindow;
@property (readonly, nonatomic) NSMutableArray *touchLocations;
@property (readonly, nonatomic) NSMutableArray *touchIdentifiers;
@property (readonly, nonatomic) NSMutableArray *touchPhases;
@property (readonly, nonatomic) BOOL inJavaScriptGesture;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double rotation;

+ (void)initialize;
+ (BOOL)_shouldDefaultToTouches;

- (void)cancel;
- (void)performAction;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateTapStateWithTouches:(id)a0 type:(int)a1;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1 touchDelegate:(id)a2;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_recordTouches:(id)a0 type:(int)a1;
- (void)_processTouches:(id)a0 withEvent:(id)a1 type:(int)a2;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_updateTapStateWithTouches:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
