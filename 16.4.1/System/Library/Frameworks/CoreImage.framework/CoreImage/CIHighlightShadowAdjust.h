@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputShadowAmount;
@property (retain, nonatomic) NSNumber *inputHighlightAmount;

+ (id)customAttributes;

- (int)_defaultVersion;
- (void)setDefaults;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v2;
- (id)_initFromProperties:(id)a0;
- (id)_kernelSH_v0;
- (id)_kernelSHnoB_v0;
- (id)outputImage;
- (id)_outputProperties;
- (BOOL)_isIdentity;
- (int)_maxVersion;
- (id)_kernelSHnoB_v1;
- (id)_kernelSnoB_v0;
- (id)_kernelSH_v2;

@end
