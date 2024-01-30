@class HMDHomeManager, NSString, HMDAccessoryFirmwareUpdateManager, HMMTRSoftwareUpdateProvider;
@protocol HMDMatterSoftwareUpdateProviderDelegateDataSource;

@interface HMDMatterSoftwareUpdateProviderDelegate : HMFObject <HMMTRSoftwareUpdateProviderDelegate, HMFLogging>

@property (readonly) id<HMDMatterSoftwareUpdateProviderDelegateDataSource> dataSource;
@property (weak) HMMTRSoftwareUpdateProvider *softwareUpdateProvider;
@property (weak) HMDHomeManager *homeManager;
@property (weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_accessoryWithPairing:(id)a0;
- (id)_queryImageResponseWithStatus:(id)a0 delayedActionTime:(id)a1;
- (void)applyUpdateWithPairing:(id)a0 requestParams:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)configureWithSoftwareUpdateProvider:(id)a0;
- (id)initWithHomeManager:(id)a0 accessoryFirmwareUpdateManager:(id)a1;
- (id)initWithHomeManager:(id)a0 accessoryFirmwareUpdateManager:(id)a1 dataSource:(id)a2;
- (void)notifySoftwareUpdateTransferStateChangeWithPairing:(id)a0 transferStatus:(unsigned long long)a1 queue:(id)a2;
- (void)notifyUpdateRequestedForHMDHAPAccessory:(id)a0;
- (void)notifyUpdateWithPairing:(id)a0 params:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)queryImageWithPairing:(id)a0 requestParams:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)softwareVersionNumberForHMDHAPAccessory:(id)a0;
- (BOOL)updateUARPFirmwareVersionForAccessory:(id)a0 version:(id)a1;

@end
