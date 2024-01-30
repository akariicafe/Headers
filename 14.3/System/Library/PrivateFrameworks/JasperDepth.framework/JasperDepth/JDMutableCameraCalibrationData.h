@class NSData;

@interface JDMutableCameraCalibrationData : JDCameraCalibrationData

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (nonatomic) struct CGSize { double x0; double x1; } referenceDimensions;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraToPlatformTransform;
@property (nonatomic) float pixelSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } lensDistortionCenter;
@property (nonatomic) int distortionModel;
@property (retain, nonatomic) NSData *distortedRadii;
@property (retain, nonatomic) NSData *undistortedRadii;
@property (nonatomic) const struct JDGDCPolynomials { float x0[8]; float x1[8]; } *distortionPolynomials;

- (void)setPixelSize:(float)a0;
- (BOOL)scale:(struct CGSize { double x0; double x1; })a0;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIntrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)setReferenceDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setCameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setLensDistortionCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setDistortionModel:(int)a0;
- (void)setDistortedRadii:(id)a0;
- (void)setUndistortedRadii:(id)a0;
- (void)setDistortionPolynomials:(const struct JDGDCPolynomials { float x0[8]; float x1[8]; } *)a0;
- (void)centerCrop:(struct CGSize { double x0; double x1; })a0;
- (void)setInternalCalib:(id)a0;

@end
