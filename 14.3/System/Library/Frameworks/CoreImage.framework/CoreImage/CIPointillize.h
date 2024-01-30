@class CIImage, NSNumber, CIVector;

@interface CIPointillize : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    CIVector *inputCenter;
}

+ (id)customAttributes;

- (id)_CIPointillize;
- (id)outputImage;

@end
