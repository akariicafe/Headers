@class NSDictionary, NSNumber;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;

+ (id)glassesMatteAllowedKey;
+ (id)depthInfoKey;
+ (id)apertureKey;

- (BOOL)canRenderDepth;
- (id)capturedAperture;
- (id)initWithAdjustment:(id)a0;

@end
