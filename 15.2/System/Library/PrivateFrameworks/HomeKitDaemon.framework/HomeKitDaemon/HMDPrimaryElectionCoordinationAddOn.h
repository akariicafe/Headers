@class HMFTimer, NSString, NSUUID, HMDLocalElectionMeshController, NSObject;
@protocol HMDResidentDeviceManagerContext, OS_dispatch_queue, HMDPrimaryResidentElectionAddOnDelegate;

@interface HMDPrimaryElectionCoordinationAddOn : NSObject <HMFLogging, HMFMessageReceiver, HMDLocalElectionMeshAddOnDelegate, HMFTimerDelegate, HMDPrimaryResidentElectionAddOn> {
    HMDLocalElectionMeshController *_meshController;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long messageTransportRestriction;
@property (readonly, weak) id<HMDResidentDeviceManagerContext> context;
@property BOOL notifyNodesChanged;
@property unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ primarySortComparator;
@property (retain, nonatomic) HMFTimer *debounceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (weak) id<HMDPrimaryResidentElectionAddOnDelegate> delegate;

+ (id)logCategory;

- (id)dumpState;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)initWithContext:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)performElection;
- (void)didAddCurrentDevice;
- (void)meshControllerDidElectLeader:(id)a0;
- (void)meshControllerDidUpdatesNodes:(id)a0;
- (id)initWithContext:(id)a0 meshController:(id)a1;
- (void)accountDidUpdate:(id)a0;
- (void)selectPrimaryResident;
- (void)handleDeviceCapabilitiesRequest:(id)a0;
- (void)handleCurrentPrimaryRequest:(id)a0;
- (void)handleCurrentPrimaryNotification:(id)a0;

@end
