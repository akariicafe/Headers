@class NSData;

@interface _CLVIOEstimation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int trackingState;
@property (nonatomic) double originTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { unsigned long long stateLengthInBytes; unsigned char stateLength; unsigned char orientationOffset; unsigned char orientationLength; unsigned char gyroBiasOffset; unsigned char gyroBiasLength; unsigned char velocityOffset; unsigned char velocityLength; unsigned char accelBiasOffset; unsigned char accelBiasLength; unsigned char positionOffset; unsigned char positionLength; } inertialStateInfo;
@property (copy, nonatomic) NSData *inertialState;
@property (nonatomic) struct { unsigned long long covarianceSizeInBytes; unsigned char covarianceSize; unsigned char orientationCovOffset; unsigned char orientationDof; unsigned char gyroBiasCovOffset; unsigned char gyroBiasDof; unsigned char velocityCovOffset; unsigned char velocityDof; unsigned char accelBiasCovOffset; unsigned char accelBiasDof; unsigned char positionCovOffset; unsigned char positionDof; } inertialCovarianceInfo;
@property (copy, nonatomic) NSData *inertialCovariance;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraPose;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) struct CGSize { double width; double height; } cameraImageResolution;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
