@interface CAUserAdjustment : NSObject

@property (readonly) double xDelta;
@property (readonly) double yDelta;
@property (readonly) double luminanceScale;
@property (readonly) double timestamp;

- (id)initWithXDelta:(double)a0 yDelta:(double)a1 luminanceScale:(double)a2;
- (id)initWithXDelta:(double)a0 yDelta:(double)a1 luminanceScale:(double)a2 timestamp:(double)a3;

@end
