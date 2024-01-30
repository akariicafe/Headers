@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;

@end
