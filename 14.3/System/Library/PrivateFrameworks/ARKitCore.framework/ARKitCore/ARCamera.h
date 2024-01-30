@class NSDictionary, AVCameraCalibrationData;

@interface ARCamera : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureOffset;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic) void /* unknown type, empty encoding */ radialDistortion;
@property (nonatomic) void /* unknown type, empty encoding */ tangentialDistortion;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) long long trackingState;
@property (nonatomic) long long trackingStateReason;
@property (nonatomic) long long devicePosition;
@property (retain, nonatomic) AVCameraCalibrationData *calibrationData;
@property (retain, nonatomic) NSDictionary *extrinsicsMap;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ eulerAngles;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } projectionMatrix;

- (id)_description:(BOOL)a0;
- (id)debugQuickLookObject;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (struct CGPoint { double x0; double x1; })focalLength;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })principalPoint;
- (struct { void /* unknown type, empty encoding */ x0[4]; })extrinsicMatrixToDeviceType:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })projectionMatrixForOrientation:(long long)a0 viewportSize:(struct CGSize { double x0; double x1; })a1 zNear:(double)a2 zFar:(double)a3;
- (struct { void /* unknown type, empty encoding */ x0[4]; })viewMatrixForOrientation:(long long)a0;
- (id)initWithIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 imageResolution:(struct CGSize { double x0; double x1; })a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })displayCenterTransform;
- (struct CGPoint { double x0; double x1; })projectPoint:(SEL)a0 orientation:(long long)a1 viewportSize:(struct CGSize { double x0; double x1; })a2;
- (void /* unknown type, empty encoding */)unprojectPoint:(struct CGPoint { double x0; double x1; })a0 ontoPlaneWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 orientation:(long long)a2 viewportSize:(struct CGSize { double x0; double x1; })a3;

@end
