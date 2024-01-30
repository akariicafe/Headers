@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (struct Rectangle { double x0; double x1; double x2; double x3; })computeDOD:(struct vec2 { float x0; float x1; })a0 tst:(struct vec3 { float x0; float x1; float x2; })a1 off:(struct vec4 { float x0; float x1; float x2; float x3; })a2 mtx:(struct vec4 { float x0; float x1; float x2; float x3; })a3;
- (id)_kernel;
- (id)outputImage;

@end
