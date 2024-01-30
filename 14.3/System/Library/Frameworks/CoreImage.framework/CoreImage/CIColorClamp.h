@class CIImage, CIVector;

@interface CIColorClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputMinComponents;
@property (retain, nonatomic) CIVector *inputMaxComponents;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelAlphaPreserving;

@end
