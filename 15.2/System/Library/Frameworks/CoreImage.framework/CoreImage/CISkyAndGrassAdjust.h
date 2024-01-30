@class CIImage, NSNumber;

@interface CISkyAndGrassAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSkyAmount;
@property (retain, nonatomic) NSNumber *inputGrassAmount;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
