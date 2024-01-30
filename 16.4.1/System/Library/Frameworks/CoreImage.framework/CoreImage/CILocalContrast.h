@class CIImage, NSNumber;

@interface CILocalContrast : CIFilter {
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelLocalContrast;

@end
