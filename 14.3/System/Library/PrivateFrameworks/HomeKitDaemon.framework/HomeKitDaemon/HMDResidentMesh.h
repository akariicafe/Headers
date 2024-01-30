@class HMDResidentMeshMeshStorage, NSUUID, HMFTimer, HMDHomeManager, NSSet, NSMutableDictionary, NSString, NSObject, NSMutableArray, HMDMessageDispatcher;
@protocol OS_dispatch_queue;

@interface HMDResidentMesh : HMFObject <HMFTimerDelegate, HMFMessageReceiver, HMFLogging>

@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) HMDMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) NSMutableArray *residents;
@property (weak, nonatomic) HMDResidentMeshMeshStorage *resident;
@property (retain, nonatomic) NSMutableArray *reachableAccessories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFTimer *startupTimer;
@property (nonatomic) long long startupTickCount;
@property (readonly, nonatomic) HMFTimer *devicesChangedTimer;
@property (retain, nonatomic) NSSet *primaryResidentForHomes;
@property (readonly, nonatomic) HMFTimer *linkQualityMonitorTimer;
@property (readonly, nonatomic) NSMutableDictionary *loadMetrics;
@property (retain, nonatomic) NSUUID *uuid;
@property unsigned long long broadcastRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_dumpState;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (id)dumpState;
- (id)messageDestination;
- (id)logIdentifier;
- (void)dumpDebug;
- (id)deviceForAccessory:(id)a0 residentOrder:(unsigned long long)a1 reachableResidents:(unsigned long long *)a2;
- (id)balancedResidentMapForAccessories:(id)a0;
- (id)bestResidentForAccessory:(id)a0;
- (void)__accessoryIsReachable:(id)a0;
- (void)_sendMessage:(id)a0 payload:(id)a1 target:(id)a2 force:(BOOL)a3 responseHandler:(id /* block */)a4;
- (id)_findDeviceInMesh:(id)a0;
- (void)_buildResidentsWithElection:(id)a0 device:(id)a1;
- (void)__accessoryIsNotReachable:(id)a0;
- (void)__rebuildResidentsViaElection:(id)a0;
- (void)__rebuildResidents:(id)a0;
- (void)__deviceResidentChanged:(id)a0;
- (void)__deviceIsNotReachable:(id)a0;
- (void)__deviceIsReachable:(id)a0;
- (void)_handleMeshUpdateRequestMessage:(id)a0;
- (void)_handleMeshUpdateMessage:(id)a0;
- (void)_addConnectivityFromDeviceToAccessory:(id)a0 activateTimer:(BOOL)a1;
- (void)_removeConnectivityFromDeviceToAccessory:(id)a0 activateTimer:(BOOL)a1;
- (void)_deviceIsReachable:(id)a0;
- (void)_deviceIsNotReachable:(id)a0;
- (BOOL)_checkReachabilityWithTimerActivation:(BOOL)a0;
- (void)_updateAccessoryLinkQuality;
- (id)_addDeviceInResidents:(id)a0;
- (id)_addDeviceInMesh:(id)a0;
- (id)_findDeviceInResidents:(id)a0;
- (id)_findDeviceInMeshByUUID:(id)a0;
- (id)_availableResidentsForHome:(id)a0;
- (id)_residentMapForAccessories:(id)a0;
- (id)initWithHomeManager:(id)a0 residentEnabled:(BOOL)a1;
- (id)residentsForCameraAccessory:(id)a0 excludeResident:(id /* block */)a1 sortedBy:(id /* block */)a2;
- (void)_flushWorkQueue;
- (void)setMetricForCurrentDevice:(id)a0 withValue:(id)a1 isUrgent:(BOOL)a2;
- (void)_dumpDebug;

@end
