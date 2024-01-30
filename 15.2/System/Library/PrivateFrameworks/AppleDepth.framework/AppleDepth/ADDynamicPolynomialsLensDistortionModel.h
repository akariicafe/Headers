@interface ADDynamicPolynomialsLensDistortionModel : ADPolynomialsLensDistortionModel {
    struct ADDistortionPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _polynomialsBase;
    struct ADDistortionPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _polynomialsDynamic;
}

@property (nonatomic) float dynamicFactor;
@property (nonatomic) const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *distortionPolynomialsBase;
@property (nonatomic) const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *distortionPolynomialsDynamic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDistortionPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a0;
- (void)updatePolynomials;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 dynFactor:(float)a1 polynomialsBase:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a2 polynomialsDynamic:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a3;

@end
