@class NSDictionary, NSNumber;

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;

+ (id)apertureKey;
+ (id)depthInfoKey;
+ (id)glassesMatteAllowedKey;

- (double)minimumAperture;
- (double)maximumAperture;
- (BOOL)canAdjustApertureValue;
- (BOOL)canRenderDepth;
- (id)capturedAperture;
- (id)initWithAdjustment:(id)a0;
- (id)pasteKeysForMediaType:(long long)a0;

@end
