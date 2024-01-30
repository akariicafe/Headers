@class UIDelayedAction;
@protocol _UIPanOrFlickGestureRecognizerDelegate;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {
    unsigned long long _touchCount;
}

@property (nonatomic) double timestampBeforeGestureBegan;
@property (nonatomic) double timestampOfLastEvent;
@property (retain, nonatomic) UIDelayedAction *elapsedAction;
@property (retain, nonatomic) UIDelayedAction *responsivenessAction;
@property (nonatomic) struct CGPoint { double x; double y; } initialCentroidLocation;
@property (readonly, nonatomic) id<_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate;
@property (nonatomic) unsigned long long allowedFlickDirections;
@property (nonatomic) double maximumFlickDuration;
@property (nonatomic) double minimumFlickDistance;
@property (readonly, nonatomic) unsigned long long recognizedFlickDirection;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;
@property (readonly, nonatomic) BOOL didLongPress;
@property (nonatomic) BOOL longPressOnly;
@property (nonatomic) double responsivenessDelay;

- (void)startTimer;
- (void)clearTimer;
- (BOOL)_analyticsIsGestureHandled;
- (void)enoughTimeElapsed:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)responsivenessTimeElapsed:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isValidLongPress;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldTryToBeginWithEvent:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
