@class CIImage, CIVector;

@interface CIToneCurve : CIFilter <_CIFilterProperties> {
    CIImage *_curveImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) CIVector *inputPoint0;
@property (copy, nonatomic) CIVector *inputPoint1;
@property (copy, nonatomic) CIVector *inputPoint2;
@property (copy, nonatomic) CIVector *inputPoint3;
@property (copy, nonatomic) CIVector *inputPoint4;

+ (id)customAttributes;
+ (id)curveImageFromPoints:(const struct CGPoint { double x0; double x1; } *)a0;
+ (id)curveImageFromPoints:(const struct CGPoint { double x0; double x1; } *)a0 linear:(BOOL)a1;
+ (void)splineCurveTable:(double *)a0 tableSize:(int)a1 gamma:(double)a2 from:(const struct CGPoint { double x0; double x1; } *)a3;

- (id)_initFromProperties:(id)a0;
- (id)outputImage;
- (void)dealloc;
- (id)_outputProperties;
- (BOOL)_isIdentity;
- (id)_kernel16;

@end
