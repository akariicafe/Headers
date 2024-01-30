@class CIImage, CIVector, NSNumber;

@interface CITorusLensDistortion : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputWidth;
    NSNumber *inputRefraction;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CITorusRefraction;

@end
