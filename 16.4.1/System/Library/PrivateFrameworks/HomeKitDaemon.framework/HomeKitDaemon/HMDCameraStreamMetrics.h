@class NSError, HMDCameraMetricsStreamLogEvent;

@interface HMDCameraStreamMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2;

@end
