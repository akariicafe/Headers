@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (BOOL)_isIdentity;

@end
