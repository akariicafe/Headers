@class CIImage, CIVector, NSNumber;

@interface CIGlassLozenge : CIFilter {
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputRadius;
    NSNumber *inputRefraction;
}

+ (id)customAttributes;

- (id)_CILozengeRefraction;
- (id)outputImage;

@end
