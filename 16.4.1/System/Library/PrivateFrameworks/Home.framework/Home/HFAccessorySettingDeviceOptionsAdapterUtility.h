@class RPCompanionLinkClient;
@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFMediaProfileContainer;

@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject

@property (retain, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) RPCompanionLinkClient *discoveryLink;
@property (nonatomic) unsigned long long rapportClientActivationFailCount;
@property (weak, nonatomic) id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1 groupedAccessory:(BOOL)a2 delegate:(id)a3;
- (id)restartAccessories;
- (id)restartAccessory;
- (id)extractWiFiInfo;
- (id)requestAirDrop:(id)a0;
- (id)_reachableDevices:(id)a0;
- (void)_resetRapportClientWithInvalidation:(BOOL)a0;
- (id)_sendRapportMessageToAccessoriesWithRequestID:(id)a0 request:(id)a1 options:(id)a2;
- (id)_sendRapportMessageToAccessoryWithRequestID:(id)a0 request:(id)a1 options:(id)a2;
- (id)_sendRapportMessageToDevice:(id)a0 requestID:(id)a1 request:(id)a2 options:(id)a3;
- (void)_setupRapportClient;
- (void)_updateRapportReachable;
- (id)identifyAccessory;
- (id)requestSysdiagnose:(id)a0 options:(id)a1;

@end
