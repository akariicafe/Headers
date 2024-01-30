@class CIImage, CIVector, NSNumber;

@interface CITorusLensDistortion : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputWidth;
    NSNumber *inputRefraction;
}

+ (id)customAttributes;

- (id)_CITorusRefraction;
- (id)outputImage;

@end
