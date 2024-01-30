@class CIImage, CIVector, NSNumber;

@interface CIStretchCrop : CIFilter {
    CIImage *inputImage;
    CIVector *inputSize;
    NSNumber *inputCropAmount;
    NSNumber *inputCenterStretchAmount;
}

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
