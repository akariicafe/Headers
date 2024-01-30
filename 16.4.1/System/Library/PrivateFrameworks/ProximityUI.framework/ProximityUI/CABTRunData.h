@class NSUUID, NSDictionary, NSNumber, NSObject;
@protocol OS_os_log;

@interface CABTRunData : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSUUID *productUUID;
@property (retain, nonatomic) NSDictionary *startEvent;
@property (retain, nonatomic) NSDictionary *firstProximityLevelFoundEvent;
@property (retain, nonatomic) NSDictionary *firstRssiEvent;
@property (retain, nonatomic) NSDictionary *firstPoseEvent;
@property (retain, nonatomic) NSDictionary *stopEvent;
@property (retain, nonatomic) NSDictionary *armsReachEvent;
@property (retain, nonatomic) NSNumber *numberOfMotionEvents;
@property (retain, nonatomic) NSNumber *numberOfProximityLevelFoundEvents;
@property (retain, nonatomic) NSNumber *numberOfProximityLevelRevokedEvents;
@property (retain, nonatomic) NSNumber *numberOfErrorEvents;
@property (retain, nonatomic) NSNumber *numberOfInvalidPoseEvents;

- (void)error:(id)a0;
- (void)start:(id)a0;
- (id)init;
- (void)stop:(id)a0;
- (void)logData;
- (void).cxx_destruct;
- (void)motion:(id)a0;
- (void)firstPose:(id)a0;
- (void)firstRssiMeasurement:(id)a0;
- (void)invalidPose:(id)a0;
- (void)proximityLevelFound:(id)a0;
- (void)proximityLevelRevoked:(id)a0;

@end
