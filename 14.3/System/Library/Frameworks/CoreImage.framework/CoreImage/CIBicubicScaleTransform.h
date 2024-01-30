@class CIImage, NSNumber;

@interface CIBicubicScaleTransform : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;
@property (retain, nonatomic) NSNumber *inputB;
@property (retain, nonatomic) NSNumber *inputC;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (struct vec2 { float x0; float x1; })_scale;
- (id)outputImage;

@end
