@class HUVelocitySample;

@interface HUVelocitySampler : NSObject

@property (retain, nonatomic) HUVelocitySample *currentSample;
@property (retain, nonatomic) HUVelocitySample *previousSample;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;

- (void).cxx_destruct;
- (void)reset;
- (void)addTouchSample:(struct CGPoint { double x0; double x1; })a0;

@end
