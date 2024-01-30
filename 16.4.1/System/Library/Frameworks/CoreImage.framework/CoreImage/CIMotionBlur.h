@class CIImage, NSNumber;

@interface CIMotionBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)_blur:(id)a0 pass:(int)a1 weightsFactor:(float)a2 legacyExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)outputImage;
- (id)_kernel;
- (BOOL)_isIdentity;

@end
