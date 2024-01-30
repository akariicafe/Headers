@class CIImage, CIVector, NSNumber;

@interface CIConvolution7X7 : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputWeights;
@property (retain, nonatomic) NSNumber *inputBias;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;

@end
