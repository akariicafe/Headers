@class CIImage, CIVector, NSNumber;

@interface CICMYKHalftone : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputWidth;
    NSNumber *inputAngle;
    NSNumber *inputSharpness;
    NSNumber *inputGCR;
    NSNumber *inputUCR;
}

+ (id)customAttributes;

- (id)_CIWhite;
- (id)outputImage;
- (id)_CICMYK_convert;
- (id)_CICMYK_cyan;
- (id)_CICMYK_magenta;
- (id)_CICMYK_yellow;
- (id)_CICMYK_black;

@end
