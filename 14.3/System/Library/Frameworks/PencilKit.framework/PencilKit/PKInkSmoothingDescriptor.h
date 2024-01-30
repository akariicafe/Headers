@interface PKInkSmoothingDescriptor : NSObject

@property (readonly, nonatomic) double stylusSmoothing;
@property (readonly, nonatomic) double touchSmoothing;
@property (readonly, nonatomic) double velocitySmoothing;

+ (id)smoothingDescriptorWithStylus:(double)a0 touch:(double)a1 velocity:(double)a2;
+ (id)defaultSmoothingDescriptor;

- (id)initWithStylusSmoothing:(double)a0 touchSmoothing:(double)a1 velocitySmoothing:(double)a2;

@end
