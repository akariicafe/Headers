@class NSArray, NSMutableSet, NSTimer;
@protocol HKMultiTouchPressGestureRecognizerDelegate;

@interface HKMultiTouchPressGestureRecognizer : UIGestureRecognizer {
    NSTimer *_touchDelayTimer;
    struct CGPoint { double x; double y; } _startingPosition;
}

@property (readonly, nonatomic) NSMutableSet *touches;
@property (nonatomic) double requiredPressDelay;
@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } touchableBounds;
@property (weak, nonatomic) id<HKMultiTouchPressGestureRecognizerDelegate> delegate;
@property (readonly, nonatomic) NSArray *orderedTouches;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)touchAtIndex:(unsigned long long)a0;
- (void)touchDelayTimerFired:(id)a0;

@end
