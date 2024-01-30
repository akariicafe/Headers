@class CIImage, NSNumber;

@interface CIPalettize : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputPaletteImage;
@property (retain, nonatomic) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelApplyPalette;

@end
