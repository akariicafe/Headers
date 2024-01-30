@class CIImage, CIVector;

@interface CIColorClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputMinComponents;
@property (retain, nonatomic) CIVector *inputMaxComponents;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (id)_kernelAlphaPreserving;

@end
