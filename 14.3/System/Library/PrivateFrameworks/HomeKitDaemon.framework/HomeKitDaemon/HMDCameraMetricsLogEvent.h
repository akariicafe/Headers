@class HMDCameraSessionID, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMDLogEvent

@property (readonly, nonatomic) HMDCameraSessionID *sessionID;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) BOOL isLocal;

- (void).cxx_destruct;
- (id)initWithMetricUUID:(id)a0 sessionID:(id)a1 cameraAccessory:(id)a2 isLocal:(BOOL)a3;

@end
