@class CIImage, CIVector, NSNumber;

@interface CIStretchCrop : CIFilter {
    CIVector *inputSize;
    NSNumber *inputCropAmount;
    NSNumber *inputCenterStretchAmount;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
