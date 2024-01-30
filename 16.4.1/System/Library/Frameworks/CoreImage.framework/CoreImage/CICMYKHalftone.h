@class CIImage, CIVector, NSNumber;

@interface CICMYKHalftone : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputSharpness;
@property (retain, nonatomic) NSNumber *inputGCR;
@property (retain, nonatomic) NSNumber *inputUCR;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICMYK_convert;
- (id)_CICMYK_magenta;
- (id)_CICMYK_black;
- (id)_CICMYK_cyan;
- (id)_CICMYK_yellow;
- (id)_CIWhite;

@end
