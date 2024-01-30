@class CIImage, CIVector, NSNumber;

@interface CIGlassDistortion : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTexture;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
