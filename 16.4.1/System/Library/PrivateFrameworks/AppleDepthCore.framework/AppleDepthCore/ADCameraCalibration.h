@protocol ADLensDistortionModel;

@interface ADCameraCalibration : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrix;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceDimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraToPlatformTransform;
@property (readonly, nonatomic) float pixelSize;
@property (readonly, nonatomic) id<ADLensDistortionModel> distortionModel;

+ (id)cameraCalibrationFromFile:(id)a0;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })createIntrinsicsMatrixWithEFL:(float)a0 principalPointX:(float)a1 principalPointY:(float)a2;
+ (void)transform:(unsigned long long)a0 points:(const void *)a1 with:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 outPoints:(void *)a3;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFile:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 cameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 pixelSize:(double)a2 forReferenceDimensions:(struct CGSize { double x0; double x1; })a3 withDistortionModel:(id)a4;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getTransformationTo:(id)a0;
- (void)backProject:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withR:(const float *)a2 outPoints:(void *)a3;
- (void)backProject:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withZ:(const float *)a2 outPoints:(void *)a3;
- (id)createDictionaryRepresentationWithHumanReadable:(BOOL)a0;
- (void)distort:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 outDistorted:(struct CGPoint { double x0; double x1; } *)a2;
- (void)project:(unsigned long long)a0 points:(const void *)a1 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a2;
- (void)project:(unsigned long long)a0 points:(const void *)a1 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a2 outR:(float *)a3;
- (void)transform:(unsigned long long)a0 points:(const void *)a1 toCamera:(id)a2 outPoints:(void *)a3;
- (void)undistort:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 outUndistorted:(struct CGPoint { double x0; double x1; } *)a2;

@end
