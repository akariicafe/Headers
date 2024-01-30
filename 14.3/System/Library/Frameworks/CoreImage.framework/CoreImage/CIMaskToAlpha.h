@class CIImage;

@interface CIMaskToAlpha : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
