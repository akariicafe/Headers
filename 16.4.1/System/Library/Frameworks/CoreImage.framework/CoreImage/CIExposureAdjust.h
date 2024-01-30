@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputEV;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;

@end
