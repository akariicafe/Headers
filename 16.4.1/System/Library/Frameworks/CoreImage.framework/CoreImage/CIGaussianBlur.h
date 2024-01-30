@class CIImage, NSNumber;

@interface CIGaussianBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;

@end
