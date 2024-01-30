@class NSPointerArray, NSMutableDictionary, NSMutableSet;

@interface WFDragGestureRecognizer : UIGestureRecognizer {
    NSMutableDictionary *_dragDirections;
    NSMutableSet *_allowedClassHeirarchies;
    NSMutableSet *_ignoredClassHeirarchies;
    struct CGPoint { double x; double y; } _start;
    NSPointerArray *_touches;
    NSMutableSet *_observedScrollViews;
    double _lastTouchTimestamp;
    struct WFDragVelocitySample { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; double dt; } _previousVelocitySample;
    struct WFDragVelocitySample { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; double dt; } _currentVelocitySample;
}

@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationOfTouch:(unsigned long long)a0 inView:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)numberOfTouches;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)startObservingScrollView:(id)a0;
- (void)acceptViewsWithClassHeirarchy:(Class)a0;
- (void)ignoreViewsWithClassHeirarchy:(Class)a0;
- (void)setPermittedDragDirections:(unsigned long long)a0 forHorizontalSizeClass:(long long)a1;
- (void)addTouches:(id)a0;
- (void)removeTouches:(id)a0;
- (void)longPressTimeoutTriggered;

@end
