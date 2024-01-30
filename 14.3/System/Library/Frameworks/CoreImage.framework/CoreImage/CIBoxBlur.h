@class CIImage, NSNumber;

@interface CIBoxBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;

@end
