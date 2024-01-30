@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
    double _minimumPrimaryMovement;
    double _maximumPrimaryMovement;
    double _minimumSecondaryMovement;
    double _maximumSecondaryMovement;
    double _minimumPrimaryMovementRate;
    double _rateOfMinimumMovementDecay;
    double _rateOfMaximumMovementDecay;
    NSMutableArray *_touches;
    struct CGPoint { double x; double y; } _startLocation;
    struct CGPoint { double x0; double x1; } *_startLocations;
    double _startTime;
    struct CGPoint { double x0; double x1; } *_previousLocations;
    double _previousTime;
    BOOL _failed;
}

@property (nonatomic) double maximumDuration;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) unsigned long long direction;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;

- (BOOL)_isGestureType:(long long)a0;
- (void)_resetGestureRecognizer;
- (void)_appendSubclassDescription:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)encodeWithCoder:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (unsigned long long)numberOfTouches;
- (struct CGPoint { double x0; double x1; })locationOfTouch:(unsigned long long)a0 inView:(id)a1;

@end
