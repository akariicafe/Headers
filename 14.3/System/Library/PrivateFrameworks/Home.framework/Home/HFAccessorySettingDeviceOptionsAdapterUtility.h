@class RPCompanionLinkClient, NSMutableArray, NAFuture;
@protocol HFHomeKitSettingsVendor, HFAccessorySettingDeviceOptionsAdapterUtilityDelegate;

@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject

@property (retain, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL isAccessoryReachableOverRapport;
@property (readonly, nonatomic) NAFuture *linkIsActivatedFuture;
@property (readonly, nonatomic) NAFuture *accessoryCompanionLinkDeviceFuture;
@property (readonly, nonatomic) NAFuture *accessoryCompanionDevicesIDFuture;
@property (readonly, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (nonatomic) BOOL isAccessoryGrouped;
@property (retain, nonatomic) NSMutableArray *deviceIDArray;
@property (weak, nonatomic) id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> delegate;

- (id)_home;
- (void).cxx_destruct;
- (id)mediaProfileContainer;
- (id)identifyAccessory;
- (void)_resetRapportClientWithInvalidation:(BOOL)a0;
- (id)_sendRapportMessageWithIdentifier:(id)a0 request:(id)a1 options:(id)a2;
- (id)_sendRapportMessageToGroupedAccessoryWithIdentifier:(id)a0 request:(id)a1 options:(id)a2;
- (id)_homeKitAccessoryUniqueIdentifier;
- (id)_mediaSessionAccessoryUniqueIdentifier;
- (void)_updateDeviceForGroupedAccessory;
- (void)_updateDevice;
- (void)_setupRapportClient;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1 groupedAccessory:(BOOL)a2 delegate:(id)a3;
- (id)requestSysdiagnose:(id)a0 options:(id)a1;
- (id)restartAccessory;
- (id)restartAccessories;
- (id)requestAirDrop:(id)a0;

@end
