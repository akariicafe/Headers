@class CIImage, CIVector, NSNumber;

@interface CIHoleDistortion : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (id)_geomKernel;
- (id)_colorKernel;
- (BOOL)_isIdentity;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDOD;

@end
