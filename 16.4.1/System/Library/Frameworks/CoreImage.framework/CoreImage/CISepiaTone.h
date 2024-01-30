@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (BOOL)_isIdentity;

@end
