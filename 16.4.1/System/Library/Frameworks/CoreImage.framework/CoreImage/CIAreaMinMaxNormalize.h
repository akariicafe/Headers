@class CIImage, CIVector;

@interface CIAreaMinMaxNormalize : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;

+ (id)customAttributes;

- (id)outputImage;

@end
