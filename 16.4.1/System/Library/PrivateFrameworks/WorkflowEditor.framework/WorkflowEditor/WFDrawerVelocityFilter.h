@interface WFDrawerVelocityFilter : NSObject

@property (nonatomic) struct { double start; double end; double dt; } currentSample;
@property (nonatomic) struct { double start; double end; double dt; } previousSample;
@property (nonatomic) double previousTime;
@property (nonatomic) double previousValue;
@property (readonly, nonatomic) double calculatedVelocity;

- (void)addSample:(double)a0;
- (void)resetWithValue:(double)a0;

@end
