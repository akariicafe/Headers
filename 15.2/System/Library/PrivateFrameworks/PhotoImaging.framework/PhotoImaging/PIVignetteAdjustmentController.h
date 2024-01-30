@class NSString;

@interface PIVignetteAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *intensityKey;
@property (class, readonly, nonatomic) NSString *radiusKey;
@property (class, readonly, nonatomic) NSString *falloffKey;

@property (nonatomic) double intensity;
@property (nonatomic) double radius;
@property (nonatomic) double falloff;

@end
