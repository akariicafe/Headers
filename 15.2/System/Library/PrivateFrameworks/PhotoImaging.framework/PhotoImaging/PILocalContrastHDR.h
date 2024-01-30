@class CIImage, NSNumber;

@interface PILocalContrastHDR : CIFilter {
    CIImage *inputImage;
    NSNumber *inputStrength;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)_kernelLocalContrast;

@end
