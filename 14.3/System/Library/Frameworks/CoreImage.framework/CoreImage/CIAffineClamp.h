@class CIImage, NSValue;

@interface CIAffineClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSValue *inputTransform;

+ (id)customAttributes;

- (id)outputImage;

@end
