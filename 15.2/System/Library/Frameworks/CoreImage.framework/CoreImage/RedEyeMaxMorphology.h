@class CIImage, NSNumber;

@interface RedEyeMaxMorphology : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

- (id)outputImage;

@end
