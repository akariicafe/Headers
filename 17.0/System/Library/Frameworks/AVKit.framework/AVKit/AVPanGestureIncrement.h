@interface AVPanGestureIncrement : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } velocity;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasMultipleTouches;

+ (id)gestureIncrementWithTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 timestamp:(double)a2 hasMultipleTouches:(BOOL)a3;

- (id)debugDescription;

@end
