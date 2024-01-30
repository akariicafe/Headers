@class CIImage, NSNumber;

@interface CIDisplacementDistortion : CIFilter {
    CIImage *inputImage;
    CIImage *inputDisplacementImage;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIDisplaceFromImage;

@end
