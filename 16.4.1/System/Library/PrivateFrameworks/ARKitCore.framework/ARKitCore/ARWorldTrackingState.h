@class NSArray, ARInertialState;

@interface ARWorldTrackingState : NSObject <NSCopying, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long state;
@property (nonatomic) long long reason;
@property (nonatomic) BOOL majorRelocalization;
@property (nonatomic) BOOL minorRelocalization;
@property (nonatomic) BOOL poseGraphUpdated;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } majorRelocalizationCameraTransform;
@property (nonatomic) long long vioTrackingState;
@property (nonatomic) double lastMajorRelocalizationTimestamp;
@property (nonatomic) double originTimestamp;
@property (nonatomic) double poseTimestamp;
@property (nonatomic) unsigned long long currentVIOMapSize;
@property (nonatomic) unsigned long long numberOfCameraSwitches;
@property (nonatomic) unsigned long long reinitializationAttempts;
@property (retain, nonatomic) NSArray *mergedSessionIdentifiers;
@property (retain, nonatomic) NSArray *collaborationStats;
@property (retain, nonatomic) ARInertialState *inertialState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
