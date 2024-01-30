@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)outputImage;
- (id)_kernel;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)_isIdentity;
- (id)_blur:(id)a0 pass:(int)a1 weightsFactor:(float)a2;
- (id)_kernelNew;

@end
