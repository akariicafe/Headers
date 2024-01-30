@class ARLineCloud, NSString, ARVideoFormat, ARSLAMState, ARWorldTrackingState;

@interface ARWorldTrackingPoseData : NSObject <ARResultData, ARDaemonSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) double lastInertialTimestamp;
@property (nonatomic) double currentStateTimestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionCameraTransform;
@property (copy, nonatomic) ARWorldTrackingState *worldTrackingState;
@property (retain, nonatomic) ARLineCloud *lineCloud;
@property (retain, nonatomic) ARVideoFormat *currentlyActiveVideoFormat;
@property (nonatomic) long long worldMappingStatus;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransform;
@property (retain, nonatomic) ARSLAMState *slamState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
