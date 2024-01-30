@class NSString, NSNumber;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *referenceTimestamp;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (void)addIDSConnectionSetup:(id)a0;
- (void)addIDSSession:(id)a0;
- (void)addInitialConfiguration:(id)a0;
- (void)addReconfiguration:(id)a0;
- (void)addStreamMessaging:(id)a0;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2;
- (id)metricForAWD;
- (unsigned int)timeSinceReference:(id)a0;

@end
