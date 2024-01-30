@class NSString, CLLocation, ARGeoTrackingStatus;

@interface ARVLStateData : NSObject <ARDaemonSecureCoding, NSCopying, ARResultData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timeSinceLastLocalization;
@property (readonly, nonatomic) double timeSinceInitialization;
@property (readonly, nonatomic) ARGeoTrackingStatus *trackingStatus;
@property (readonly, nonatomic) double fusedReplayLocationTimestamp;
@property (readonly, nonatomic) CLLocation *fusedReplayLocation;
@property (readonly, nonatomic) double fusedReplayHeading;
@property (readonly, nonatomic) double fusedReplayHeadingTimestamp;
@property (readonly, nonatomic) BOOL hasStartedAvailabilityCheck;
@property (readonly, nonatomic) BOOL hasReturnedAvailabilityCheck;
@property (readonly, nonatomic) BOOL hasStartedLocalization;
@property (readonly, nonatomic) BOOL hasReturnedLocalization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init:(double)a0 timeSinceInitialization:(double)a1 trackingStatus:(id)a2 fusedReplayLocation:(id)a3 fusedReplayLocationTimestamp:(double)a4 fusedReplayHeading:(double)a5 fusedReplayHeadingTimestamp:(double)a6 hasStartedAvailabilityCheck:(BOOL)a7 hasReturnedAvailabilityCheck:(BOOL)a8 hasStartedLocalization:(BOOL)a9 hasReturnedLocalization:(BOOL)a10;

@end
