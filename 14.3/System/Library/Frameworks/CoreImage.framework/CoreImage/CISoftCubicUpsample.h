@class CIImage, NSNumber;

@interface CISoftCubicUpsample : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (struct vec2 { float x0; float x1; })_scale;
- (id)outputImage;

@end
