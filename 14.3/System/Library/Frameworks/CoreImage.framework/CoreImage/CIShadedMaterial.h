@class CIImage, NSNumber;

@interface CIShadedMaterial : CIFilter {
    CIImage *inputImage;
    CIImage *inputShadingImage;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)_CIShadedmaterial;
- (id)_CIShadedmaterial_0;
- (id)outputImage;

@end
