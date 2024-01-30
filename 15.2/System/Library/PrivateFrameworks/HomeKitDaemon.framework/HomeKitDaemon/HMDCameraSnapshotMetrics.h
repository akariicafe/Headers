@class NSError, HMDCameraMetricsSnapshotLogEvent;

@interface HMDCameraSnapshotMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 snapshotForNotification:(BOOL)a3;

@end
