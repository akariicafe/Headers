@class CIImage, NSNumber;

@interface CILocalContrast : CIFilter {
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)_kernelLocalContrast;
- (id)outputImage;

@end
