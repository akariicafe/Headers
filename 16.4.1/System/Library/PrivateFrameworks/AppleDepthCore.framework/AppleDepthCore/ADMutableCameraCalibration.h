@protocol ADLensDistortionModel;

@interface ADMutableCameraCalibration : ADCameraCalibration

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (nonatomic) struct CGSize { double x0; double x1; } referenceDimensions;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraToPlatformTransform;
@property (nonatomic) float pixelSize;
@property (retain, nonatomic) id<ADLensDistortionModel> distortionModel;

+ (id)new;

- (void)setPixelSize:(float)a0;
- (id)init;
- (BOOL)scale:(struct CGSize { double x0; double x1; })a0;
- (BOOL)adjustForImageRotation:(long long)a0;
- (void)setDistortionModel:(id)a0;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setIntrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)centerCrop:(struct CGSize { double x0; double x1; })a0;
- (void)setReferenceDimensions:(struct CGSize { double x0; double x1; })a0;

@end
