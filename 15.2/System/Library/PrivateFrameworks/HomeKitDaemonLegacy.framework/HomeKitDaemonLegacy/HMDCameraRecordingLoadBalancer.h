@class HMDHomeManager, HMISystemResourceUsageMonitor, NSMutableDictionary, NSString;

@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property unsigned long long totalNumberOfStreams;
@property (retain) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) NSMutableDictionary *decisionsByDeviceUUIDByCameraUUID;
@property (readonly) NSMutableDictionary *lastDecisionByCameraUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (void).cxx_destruct;
- (void)recordingDidEndForCameraWithUUID:(id)a0;
- (BOOL)isReadyToRecordForCameraWithUUID:(id)a0;
- (void)recordingDidStartForCameraWithUUID:(id)a0;
- (id)makeLoadBalancingDecisionForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (void)handleRecordingSessionForwardingFailureForCamera:(id)a0 toDevice:(id)a1;
- (void)setReadyToRecord:(BOOL)a0 forCameraWithUUID:(id)a1;
- (void)removeDataForCameraWithUUID:(id)a0;
- (id)initWithHomeManager:(id)a0 resourceUsageMonitor:(id)a1;
- (void)systemResourceUsageDidChangeTo:(long long)a0;
- (void)handleLoadBalancingDecision:(id)a0;
- (void)_handleLoadBalancingDecision:(id)a0;
- (id)_makeLoadBalancingDecisionForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (id)_loadBalancingDescriptionFromSortedNodes:(id)a0;
- (void)_updateReadyToRecordMetric;
- (void)_updateActiveRecordingSessionsMetric;
- (unsigned long long)_jobSlotsWithSystemResourceUsageLevel:(long long)a0;
- (unsigned long long)_partialJobSlotsWithSystemResourceUsageLevel:(long long)a0;
- (void)handleResidentMeshInitialized:(id)a0;

@end
