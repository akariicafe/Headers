@class CIImage, NSNumber;

@interface CIDither : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)_kernelDither;
+ (id)customAttributes;

- (id)outputImage;

@end
