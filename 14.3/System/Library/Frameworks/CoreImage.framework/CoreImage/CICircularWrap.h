@class CIImage, CIVector, NSNumber;

@interface CICircularWrap : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputAngle;
}

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
