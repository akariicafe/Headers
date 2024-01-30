@class CIImage, CIVector;

@interface CIStretch : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) CIVector *inputSize;

+ (id)customAttributes;

- (id)_kernel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDOD:(struct vec4 { float x0; float x1; float x2; float x3; })a0;
- (id)outputImage;
- (void)setDefaults;

@end
