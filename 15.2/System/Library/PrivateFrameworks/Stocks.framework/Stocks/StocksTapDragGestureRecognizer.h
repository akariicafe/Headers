@class NSTimer, NSMutableSet;

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer {
    NSTimer *_touchDelayTimer;
    struct CGPoint { double x; double y; } _startingPosition;
}

@property (readonly, nonatomic) NSMutableSet *touches;
@property (nonatomic) double requiredPressDelay;
@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } touchableBounds;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchDelayTimerFired:(id)a0;

@end
