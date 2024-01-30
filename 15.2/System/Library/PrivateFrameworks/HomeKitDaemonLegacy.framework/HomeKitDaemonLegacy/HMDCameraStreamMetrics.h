@class NSError, HMDCameraMetricsStreamLogEvent;

@interface HMDCameraStreamMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2;

@end
