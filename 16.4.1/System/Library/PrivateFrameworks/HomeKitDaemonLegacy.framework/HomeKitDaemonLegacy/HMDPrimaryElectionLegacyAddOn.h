@class HMFTimer, NSString, NSUUID, NSHashTable, NSObject, HMDResidentDevice;
@protocol HMDResidentDeviceManagerContext, HMDPrimaryResidentElectionAddOnDelegate, OS_dispatch_queue;

@interface HMDPrimaryElectionLegacyAddOn : NSObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDPrimaryResidentElectionAddOn>

@property (nonatomic, getter=isConfirming) BOOL confirming;
@property (readonly, nonatomic) HMDResidentDevice *preferredElector;
@property (readonly, nonatomic) BOOL isAtHome;
@property (retain, nonatomic) HMFTimer *residentMonitorTimer;
@property (readonly, copy, nonatomic) NSHashTable *devicePreferenceDataSources;
@property (readonly, weak, nonatomic) id<HMDResidentDeviceManagerContext> context;
@property (weak) id<HMDPrimaryResidentElectionAddOnDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (long long)compareElectionVersions:(id)a0 otherVersion:(id)a1;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)dumpState;
- (void)addDataSource:(id)a0;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)performElection;
- (BOOL)residentIsPartOfTheCurrentMesh:(id)a0;
- (void)__handleConfirmationRequest:(id)a0;
- (void)_handleConfirmResidentDevice:(id)a0;
- (void)_handleResidentElectionParameters:(id)a0;
- (void)atHomeLevelChanged:(long long)a0;
- (id)computePreferredElector:(unsigned long long *)a0;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
- (void)confirmPrimaryResident;
- (void)confirmWithCompletionHandler:(id /* block */)a0;
- (void)handleBatteryLevelChange:(id)a0;
- (void)handleBatteryStateChange:(id)a0;
- (void)performElectionWithReason:(unsigned long long)a0;
- (void)primaryResidentChanged:(id)a0 previousResidentDevice:(id)a1;

@end
