@class NSString, NSNumber;

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL snapshotForNotification;
@property (retain, nonatomic) NSNumber *referenceTimestamp;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (void)addIDSTransfer:(id)a0;
- (void)addIDSSession:(id)a0;
- (void)addSnapshotMessaging:(id)a0;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 snapshotForNotification:(BOOL)a3;
- (id)metricForAWD;
- (unsigned int)timeSinceReference:(id)a0;

@end
