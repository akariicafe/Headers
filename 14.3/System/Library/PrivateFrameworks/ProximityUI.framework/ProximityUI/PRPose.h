@interface PRPose : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;

+ (id)poseWithTime:(double)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

- (id)initWithTime:(double)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
