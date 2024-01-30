@class NSDictionary, NSNumber;

@interface CARunData : NSObject

@property (retain, nonatomic) NSDictionary *startEvent;
@property (retain, nonatomic) NSDictionary *firstTargetFoundEvent;
@property (retain, nonatomic) NSDictionary *firstRangeEvent;
@property (retain, nonatomic) NSDictionary *firstPoseEvent;
@property (retain, nonatomic) NSDictionary *stopEvent;
@property (retain, nonatomic) NSDictionary *armsReachEvent;
@property (retain, nonatomic) NSNumber *numberOfMotionEvents;
@property (retain, nonatomic) NSNumber *numberOfTargetFoundEvents;
@property (retain, nonatomic) NSNumber *numberOfTargetRevokedEvents;
@property (retain, nonatomic) NSNumber *numberOfErrorEvents;
@property (retain, nonatomic) NSNumber *numberOfInvalidPoseEvents;

- (void)start:(id)a0;
- (id)init;
- (void)stop:(id)a0;
- (void).cxx_destruct;
- (void)error:(id)a0;
- (void)logData;
- (void)motion:(id)a0;
- (void)targetFound:(id)a0;
- (void)targetRevoked:(id)a0;
- (void)firstPose:(id)a0;
- (void)firstRange:(id)a0;
- (void)invalidPose:(id)a0;

@end
