@class CIImage, CIVector, NSNumber;

@interface CICircularScreen : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputSharpness;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
