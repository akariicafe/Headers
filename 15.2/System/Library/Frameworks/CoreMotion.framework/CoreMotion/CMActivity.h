@interface CMActivity : CMLogItem {
    struct CLMotionActivity { int type; int confidence; int source; int mountedState; int mountedConfidence; BOOL isStanding; float tilt; double timestamp; BOOL isVehicleConnected; int exitState; double estExitTime; double startTime; int rawType; int rawConfidence; struct { unsigned char motionHint : 1; unsigned char gpsHint : 1; unsigned char basebandHint : 1; unsigned char wifiHint : 1; unsigned char btHint : 1; } vehicularFlags; int vehicularConfidence; float drivingStowedLikelihoodSum; float drivingArmLikelihoodSum; float ssLikelihoodSum; int workoutDetectionType; double workoutDetectionTime; unsigned long long workoutEscalationTime; int typeYouth; } fActivity;
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
- (id)initWithMotionActivity:(struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; BOOL x5; float x6; double x7; BOOL x8; int x9; double x10; double x11; int x12; int x13; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x14; int x15; float x16; float x17; float x18; int x19; double x20; unsigned long long x21; int x22; })a0;
- (struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; BOOL x5; float x6; double x7; BOOL x8; int x9; double x10; double x11; int x12; int x13; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x14; int x15; float x16; float x17; float x18; int x19; double x20; unsigned long long x21; int x22; })activity;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
