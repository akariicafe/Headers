@class CIImage, CIVector;

@interface CIStretch : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) CIVector *inputSize;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDOD:(struct vec4 { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x0; struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x1; } x2; struct { struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x0; struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x1; } x3; struct { struct vec3 { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x0; } x2; struct { struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x0; } x3; } x0; } x0; } x4; struct { struct vec3 { union { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x0; } x2; struct { struct vec2 { union { float x0; float x1; } x0; union { float x0; float x1; } x1; } x0; } x3; } x0; } x0; } x5; } x0; })a0;

@end
