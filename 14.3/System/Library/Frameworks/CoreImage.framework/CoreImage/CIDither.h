@class CIImage, NSNumber;

@interface CIDither : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;
+ (id)_kernelDither;

- (id)outputImage;

@end
