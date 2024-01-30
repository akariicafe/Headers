@class NSMutableSet;
@protocol SBPIPSystemGestureRecognizerDelegate;

@interface SBPIPRotationGestureRecognizer : UIRotationGestureRecognizer {
    NSMutableSet *_touches;
    struct CGPoint { double x; double y; } _accumulatedMovement;
    struct CGPoint { double x; double y; } _maximumAbsoluteAccumulatedMovement;
    BOOL _achievedMaximumAbsoluteAccumulatedMovement;
}

@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) BOOL failsPastHysteresis;
@property (nonatomic) id<SBPIPSystemGestureRecognizerDelegate> delegate;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
