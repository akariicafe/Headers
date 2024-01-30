@class HMDHomeManager, HMISystemResourceUsageMonitor, NSMutableDictionary, NSString;

@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property (readonly) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) NSMutableDictionary *decisionsByCameraUUIDByDeviceUUID;
@property (readonly) NSMutableDictionary *lastDecisionByCameraUUID;
@property unsigned long long totalNumberOfStreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (void).cxx_destruct;
- (void)systemResourceUsageDidChangeTo:(long long)a0;
- (unsigned long long)_jobSlotsWithSystemResourceUsageLevel:(long long)a0;
- (id)_loadBalancingDecisionForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (id)_loadBalancingDescriptionFromSortedNodes:(id)a0;
- (unsigned long long)_partialJobSlotsWithSystemResourceUsageLevel:(long long)a0;
- (void)_updateActiveRecordingSessionsMetric;
- (void)_updateReadyToRecordMetric;
- (void)handleRecordingSessionForwardingFailureForDecision:(id)a0;
- (void)handleRecordingSessionForwardingSuccessForDecision:(id)a0;
- (void)handleResidentMeshInitialized:(id)a0;
- (id)initWithHomeManager:(id)a0 resourceUsageMonitor:(id)a1;
- (BOOL)isReadyToRecordForCameraWithUUID:(id)a0;
- (id)loadBalancingDecisionForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (void)recordingDidEndForCameraWithUUID:(id)a0;
- (void)recordingDidStartForCameraWithUUID:(id)a0;
- (void)removeDataForCameraWithUUID:(id)a0;
- (void)setReadyToRecord:(BOOL)a0 forCameraWithUUID:(id)a1;

@end
