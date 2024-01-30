@class CVACLMotionTypeVector3, CVACLMotionTypeDoubleVector4;

@interface CVACMMotionTypeDeviceMotionData : NSObject

@property (retain, nonatomic) CVACLMotionTypeDoubleVector4 *quaternion;
@property (retain, nonatomic) CVACLMotionTypeVector3 *userAcceleration;
@property (retain, nonatomic) CVACLMotionTypeVector3 *gravity;
@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate;
@property (retain, nonatomic) CVACLMotionTypeVector3 *magneticField;
@property (nonatomic) int magneticFieldCalibrationLevel;
@property (nonatomic) BOOL doingYawCorrection;
@property (nonatomic) BOOL doingBiasEstimation;
@property (nonatomic) BOOL isInitialized;

- (id)init;
- (void).cxx_destruct;

@end
