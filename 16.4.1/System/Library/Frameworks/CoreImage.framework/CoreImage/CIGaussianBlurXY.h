@class CIImage, NSNumber;

@interface CIGaussianBlurXY : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSigmaX;
@property (retain, nonatomic) NSNumber *inputSigmaY;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;

@end
