@class CIImage, NSNumber;

@interface PIPhotoGrainHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputISO;
@property (copy, nonatomic) NSNumber *inputAmount;
@property (copy, nonatomic) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)_interpolateGrainKernel;
- (id)_paddedTileKernel;
- (id)_grainBlendAndMixKernel;

@end
