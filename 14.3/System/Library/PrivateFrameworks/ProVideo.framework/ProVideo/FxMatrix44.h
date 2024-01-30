@interface FxMatrix44 : NSObject <NSSecureCoding> {
    double _mat[4][4];
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)invert;
- (double[4][4] *)matrix;
- (id)init;
- (void)setMatrix:(double[4][4])a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)transpose;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMatrix44Data:(double[4][4])a0;
- (struct CGPoint { double x0; double x1; })transform2DPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFxMatrix:(id)a0;
- (BOOL)_planarInverseZ;
- (id)initWithColorMatrix44Data:(double[4][4])a0;
- (void)setToIdentity;
- (BOOL)invertColorMatrixWithTolerance:(double)a0;
- (struct FxPoint3D { double x0; double x1; double x2; })transform3DPoint:(struct FxPoint3D { double x0; double x1; double x2; })a0;

@end
