@class NSString;

@interface ADPolynomialsLensDistortionModel : NSObject <ADLensDistortionModel> {
    struct ADDistortionPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _polynomials;
}

@property (nonatomic) struct CGPoint { double x; double y; } distortionCenter;
@property (nonatomic) const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *distortionPolynomials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scale:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 andPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a1;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (void)adjustForImageRotation:(long long)a0 forDimensions:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 andPloynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a1;

@end
