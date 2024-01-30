@class NSOperationQueue, CMMotionManager, CMAttitude;

@interface JTMotionData : NSObject

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSOperationQueue *motionQueue;
@property (retain, nonatomic) CMAttitude *refAttitude;
@property (nonatomic) struct { double x; double y; double z; double w; } currentAttitude;
@property (nonatomic) double yawRadians;
@property (nonatomic) double rollRadians;
@property (nonatomic) double pitchRadians;
@property BOOL started;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; double x3; })currentOrientation;
- (struct { double x0; double x1; double x2; double x3; })getOrientation:(struct { double x0; double x1; double x2; double x3; })a0;
- (struct { double x0; double x1; double x2; double x3; })syntheticOrientation;
- (void)startMotion;
- (void)stopMotion;

@end
