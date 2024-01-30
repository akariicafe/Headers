@interface _UIVelocityIntegratorDataSample : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) struct CGVector { double dx; double dy; } translation;
@property (nonatomic) struct CGPoint { double x; double y; } point;

- (BOOL)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint { double x0; double x1; })a0 minimumRequiredMovement:(double)a1;
- (id)description;
- (void)updateTimeToNow;

@end
