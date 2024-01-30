@class HMDHomeManager, HMISystemResourceUsageMonitor, NSMutableDictionary, NSString, HMFUnfairLock;

@interface HMDCameraRecordingResidentElector : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    HMFUnfairLock *_lock;
}

@property unsigned long long totalNumberOfStreams;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)removeDataForCameraWithUUID:(id)a0;
- (void)setReadyToRecord:(BOOL)a0 forCameraWithUUID:(id)a1;
- (id)preferredResidentDevicesForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (void)recordingDidStartForCameraWithUUID:(id)a0;
- (BOOL)isReadyToRecordForCameraWithUUID:(id)a0;
- (void)recordingDidEndForCameraWithUUID:(id)a0;
- (id)initWithHomeManager:(id)a0 resourceUsageMonitor:(id)a1;
- (void)handleResidentMeshInitialized:(id)a0;
- (void)_updateReadyToRecordMetric;
- (void)systemResourceUsageDidChangeTo:(long long)a0;

@end
