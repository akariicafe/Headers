@class NSString, NSMapTable, NSSet, HMFUnfairLock, NSObject, HMFWiFiManager;
@protocol OS_dispatch_queue, HMDCompanionLinkClient, HMDSharingDeviceDiscovery;

@interface HMDSymptomManager : HMFObject <HMFLogging>

@property (class, readonly) HMDSymptomManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) id<HMDSharingDeviceDiscovery> deviceDiscovery;
@property (readonly, nonatomic) id<HMDCompanionLinkClient> companionLinkClient;
@property (readonly, nonatomic) HMFWiFiManager *wifiManager;
@property (readonly, nonatomic) NSMapTable *symptomContainerByRegisteredAccessory;
@property (readonly, nonatomic) NSMapTable *nearbySFDevices;
@property (readonly, nonatomic) NSMapTable *networkReachableRPCompanionLinkDevices;
@property (nonatomic) unsigned long long deviceDiscoveryFlags;
@property (nonatomic) int deviceProblemNotificationToken;
@property (nonatomic, getter=isDeviceProblemNotificationTokenValid) BOOL deviceProblemNotificationTokenValid;
@property (nonatomic) BOOL supportsRegisteringAccessories;
@property (readonly, copy, nonatomic) NSSet *currentDeviceSymptoms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_stop;
- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;
- (void)registerAccessory:(id)a0 delegate:(id)a1;
- (void)initiateFixForAccessory:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 deviceDiscovery:(id)a1 companionLinkClient:(id)a2 wifiManager:(id)a3;
- (void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)a0;
- (void)handleCurrentNetworkDidChangeNotification:(id)a0;
- (id)_currentDeviceSymptoms;
- (void)_updateSymptomsForRegisteredAccessory:(id)a0;
- (void)_initiateFixForAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_sfDeviceLostHandler:(id)a0;
- (void)_stopDeviceDiscovery;
- (void)_startDeviceDiscovery;
- (void)_startCompanionLinkClient;
- (void)_sfDeviceFoundHandler:(id)a0;
- (void)_sfDeviceChangedHandler:(id)a0;
- (void)_rpDeviceFoundHandler:(id)a0;
- (void)_rpDeviceChangedHandler:(id)a0;
- (void)_rpDeviceLostHandler:(id)a0;
- (void)_stopCompanionLinkClient;
- (id)_localSymptomsForRegisteredAccessory:(id)a0;
- (id)_registeredAccessoryWithIDSIdentifier:(id)a0;
- (void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)a0;
- (void)deregisterAccessory:(id)a0;
- (void)_updateSymptomsForAllRegisteredAccessories;

@end
