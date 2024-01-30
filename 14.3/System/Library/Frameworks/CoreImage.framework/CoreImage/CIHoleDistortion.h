@class CIImage, CIVector, NSNumber;

@interface CIHoleDistortion : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_geomKernel;
- (id)_colorKernel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDOD;
- (id)outputImage;

@end
