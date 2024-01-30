@class CIImage, NSNumber;

@interface CIRingBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputPointCount;
}

+ (id)customAttributes;

- (id)outputImage;

@end
