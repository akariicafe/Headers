@interface UIKBPanGestureVelocitySample : NSObject

@property struct CGPoint { double x; double y; } start;
@property struct CGPoint { double x; double y; } end;
@property double dt;
@property double force;
@property double majorRadius;

- (void)resetValues;
- (void)pullValuesFrom:(id)a0;

@end
