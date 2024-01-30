@class CIImage, NSNumber;

@interface CIHueAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)outputImage;

@end
