@class CIImage, NSNumber;

@interface CIGammaAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputPower;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;

@end
