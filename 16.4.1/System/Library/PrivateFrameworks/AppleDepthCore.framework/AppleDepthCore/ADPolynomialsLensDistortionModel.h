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

+ (unsigned long long)hashPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a0;
+ (BOOL)isEqualPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a0 otherPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)scale:(float)a0;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 andPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a1;
- (id)dictionaryRepresentation:(BOOL)a0;
- (void)adjustForImageRotation:(long long)a0 forDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withPixelSize:(double)a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a4;
- (double)getMaxDistortedRadius:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 andPloynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a1;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withPixelSize:(double)a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a4;

@end
