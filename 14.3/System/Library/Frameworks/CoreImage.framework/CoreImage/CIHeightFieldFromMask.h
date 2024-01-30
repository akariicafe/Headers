@class CIImage, NSNumber;

@interface CIHeightFieldFromMask : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)_CIResetalpha;
- (id)outputImage;

@end
