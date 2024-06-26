@class NSMutableSet, HMDHomePrimaryResidentInitialReachabilityManager, HMDPrimaryElectionLegacyAddOn, NSObject, HMDMessageDispatcher, HMFFuture, NSString, HMDResidentDevice, NSHashTable, HMDPrimaryElectionCoordinationAddOn, HMDDevice, NSSet, NSArray, HMDHome, HMFPromise, NSNotificationCenter, NSUUID;
@protocol OS_dispatch_queue, HMDResidentDeviceManagerDelegate, HMDResidentDeviceManagerLegacyDataSource;

@interface HMDResidentDeviceManagerLegacy : HMFObject <HMDPrimaryResidentElectionAddOnDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDResidentDeviceManagerContext, NSSecureCoding, HMDResidentDeviceManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    BOOL _verifyCurrentResidentDevice;
    BOOL _fixupRemoteResidentDevice;
    HMDHome *_home;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly) id<HMDResidentDeviceManagerLegacyDataSource> dataSource;
@property (readonly) NSString *logIdentifier;
@property (readonly, copy, nonatomic) NSHashTable *devicePreferenceDataSources;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMDHomePrimaryResidentInitialReachabilityManager *primaryResidentInitialReachabilityManager;
@property (retain) HMFPromise *cloudReadyPromise;
@property (retain) HMDPrimaryElectionLegacyAddOn *legacyElection;
@property (retain) HMDPrimaryElectionCoordinationAddOn *localNetworkElection;
@property (nonatomic, getter=hasFirstLegacyFetch) BOOL firstLegacyFetch;
@property (nonatomic, getter=hasFirstHomeManagerZoneFetch) BOOL firstHomeManagerZoneFetch;
@property (nonatomic, getter=hasFirstHomeZoneFetch) BOOL firstHomeZoneFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isResidentSupported;
@property (readonly) BOOL isResidentEnabled;
@property (readonly) BOOL isOwnerUser;
@property (readonly) HMDResidentDevice *currentResidentDevice;
@property (readonly) HMDResidentDevice *primaryResidentDevice;
@property (readonly, copy) NSArray *availableResidentDevices;
@property (readonly) BOOL isCurrentDeviceAvailableResident;
@property (readonly) HMDHome *home;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) HMFFuture *cloudReady;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) long long atHomeLevel;
@property (weak) id<HMDResidentDeviceManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *residentDevices;
@property (readonly, nonatomic, getter=isResidentAvailable) BOOL residentAvailable;
@property (readonly, nonatomic, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly, nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic) HMDDevice *confirmedPrimaryResidentDevice;
@property (readonly, nonatomic) BOOL isResidentElectionV2Enabled;
@property (readonly, nonatomic) BOOL hasTrustZoneCapableResident;
@property (readonly) NSUUID *primaryResidentUUID;
@property (nonatomic, getter=isResidentSupported) BOOL residentSupported;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;

- (void)run;
- (void)encodeWithCoder:(id)a0;
- (void)_run;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)dumpState;
- (void)addDataSource:(id)a0;
- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setHome:(id)a0;
- (void)_registerForMessages;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)ourSelf;
- (BOOL)_createResidentDeviceWithModel:(id)a0;
- (void)__currentDeviceUpdated:(id)a0 completion:(id /* block */)a1;
- (void)_addResidentDevice:(id)a0;
- (void)_electResidentDevice:(unsigned long long)a0;
- (void)_fixUpRemoteResidentDevice:(id)a0 existingResidentDevice:(id)a1;
- (void)_handleCloudZoneReadyNotification:(id)a0;
- (void)_handleResidentDeviceUpdateEnabled:(id)a0;
- (void)_removeResidentDevice:(id)a0;
- (void)_removeResidentDevice:(id)a0 reason:(id)a1;
- (void)_removeResidentDeviceWithModel:(id)a0 message:(id)a1;
- (void)_sendResidentDeviceNotificationWithName:(id)a0 forResidentDevice:(id)a1;
- (void)_setupSessionWithPrimaryResidentDevice;
- (BOOL)_shouldEnableCoordinationElection;
- (void)_startElectionAddOn;
- (void)_stopCoordinationElectionWithReason:(id)a0;
- (void)_stopLegacyElectionWithReason:(id)a0;
- (void)_teardownSessionWithPrimaryResidentDevice;
- (void)_updateReachability:(BOOL)a0 forResidentDevice:(id)a1;
- (void)_updateResidentAvailability;
- (void)_verifyCurrentResidentDevice;
- (void)atHomeLevelChanged:(long long)a0;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)confirmAsResident;
- (void)confirmOnAvailability;
- (void)confirmWithCompletionHandler:(id /* block */)a0;
- (void)electResidentDevice:(unsigned long long)a0;
- (void)handleCurrentDeviceChanged:(id)a0;
- (void)handleDeviceUpdated:(id)a0;
- (void)handleHomeUpdatedAccessories:(id)a0;
- (void)handleResidentDeviceIsNotReachable:(id)a0;
- (void)handleResidentDeviceIsReachable:(id)a0;
- (void)notifyClientsOfUpdatedResidentDevice:(id)a0;
- (void)notifyResidentAvailable:(BOOL)a0;
- (void)notifyUpdatedPrimaryResident:(id)a0;
- (void)primaryElectionAddOn:(id)a0 didElectPrimaryResident:(id)a1 confirmed:(BOOL)a2 electionLogEvent:(id)a3;
- (void)primaryElectionAddOn:(id)a0 didFailToElectWithError:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didUpdateActiveNodes:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didUpdateResidentDevice:(id)a1;
- (void)removeResidentDevice:(id)a0;
- (id)residentDeviceForDevice:(id)a0;
- (id)residentWithUUID:(id)a0;
- (void)setResidentAvailable:(BOOL)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updatePrimaryResidentWithUUID:(id)a0 actions:(id)a1;
- (void)updateResidentAvailability;
- (BOOL)wasTheHomeFetchedFromCloud;

@end
