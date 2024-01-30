@class CIImage, NSNumber;

@interface CIPhotoGrain : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputISO;
@property (copy, nonatomic) NSNumber *inputAmount;
@property (copy, nonatomic) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)_interpolateGrainKernel;
- (id)_paddedTileKernel;
- (id)_grainBlendAndMixKernel;
- (id)outputImage;

@end
