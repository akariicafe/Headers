@interface PKInkSmoothingDescriptor : NSObject

@property (readonly, nonatomic) double stylusSmoothing;
@property (readonly, nonatomic) double touchSmoothing;
@property (readonly, nonatomic) double velocitySmoothing;
@property (readonly, nonatomic) double angleSmoothing;
@property (readonly, nonatomic) double radiusSmoothing;

- (id)mutableCopy;
- (id)initWithStylusSmoothing:(double)a0 touch:(double)a1 velocity:(double)a2 angle:(double)a3 radius:(double)a4;

@end
