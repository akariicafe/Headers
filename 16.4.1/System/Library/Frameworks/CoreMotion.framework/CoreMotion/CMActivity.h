@interface CMActivity : CMLogItem {
    struct CLMotionActivity { int type; int confidence; int source; int mountedState; int mountedConfidence; int conservativeMountedState; double conservativeMountedProbability; BOOL isStanding; float tilt; double timestamp; BOOL isVehicleConnected; int exitState; double estExitTime; double startTime; int rawType; int rawConfidence; struct { unsigned char motionHint : 1; unsigned char gpsHint : 1; unsigned char basebandHint : 1; unsigned char wifiHint : 1; unsigned char btHint : 1; } vehicularFlags; int vehicularConfidence; float drivingStowedLikelihoodSum; float drivingArmLikelihoodSum; float ssLikelihoodSum; int workoutDetectionType; double workoutDetectionTime; unsigned long long workoutEscalationTime; int typeYouth; } fActivity;
}

@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL isWalking;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) BOOL isDriving;
@property (readonly, nonatomic) BOOL maybeExitingVehicle;
@property (readonly, nonatomic) BOOL hasExitedVehicle;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; double x13; int x14; int x15; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x16; int x17; float x18; float x19; float x20; int x21; double x22; unsigned long long x23; int x24; })activity;
- (id)description;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; double x13; int x14; int x15; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x16; int x17; float x18; float x19; float x20; int x21; double x22; unsigned long long x23; int x24; })a0;

@end
