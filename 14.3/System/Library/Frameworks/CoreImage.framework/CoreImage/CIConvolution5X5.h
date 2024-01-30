@class CIImage, CIVector, NSNumber;

@interface CIConvolution5X5 : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputWeights;
@property (retain, nonatomic) NSNumber *inputBias;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;

@end
