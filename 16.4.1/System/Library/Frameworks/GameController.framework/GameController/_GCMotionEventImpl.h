@class NSString;

@interface _GCMotionEventImpl : NSObject <_GCMotionEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasGyro;
@property (nonatomic) double gyroPitch;
@property (nonatomic) double gyroYaw;
@property (nonatomic) double gyroRoll;
@property (nonatomic) BOOL hasAccelerometer;
@property (nonatomic) double accelerometerX;
@property (nonatomic) double accelerometerY;
@property (nonatomic) double accelerometerZ;
@property (nonatomic) BOOL hasAttitude;
@property (nonatomic) double attitudeW;
@property (nonatomic) double attitudeX;
@property (nonatomic) double attitudeY;
@property (nonatomic) double attitudeZ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMotionEvent:(id)a0;

@end
