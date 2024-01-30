@class CIImage, NSValue;

@interface CIAffineTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSValue *inputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
