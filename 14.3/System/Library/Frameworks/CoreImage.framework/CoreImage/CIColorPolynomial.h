@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRedCoefficients;
@property (retain, nonatomic) CIVector *inputGreenCoefficients;
@property (retain, nonatomic) CIVector *inputBlueCoefficients;
@property (retain, nonatomic) CIVector *inputAlphaCoefficients;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)_kernelRGB;
- (BOOL)_isIdentityAlpha;

@end
