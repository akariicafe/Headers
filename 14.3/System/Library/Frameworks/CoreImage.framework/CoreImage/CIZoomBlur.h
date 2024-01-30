@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)_isIdentity;
- (id)_kernelNew;
- (id)_blur:(id)a0 pass:(int)a1 weightsFactor:(float)a2;
- (id)valueForUndefinedKey:(id)a0;
- (id)_kernel;
- (id)outputImage;

@end
