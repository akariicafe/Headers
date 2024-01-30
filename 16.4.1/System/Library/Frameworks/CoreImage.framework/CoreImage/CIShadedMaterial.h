@class CIImage, NSNumber;

@interface CIShadedMaterial : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputShadingImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIShadedmaterial;
- (id)_CIShadedmaterial_0;

@end
