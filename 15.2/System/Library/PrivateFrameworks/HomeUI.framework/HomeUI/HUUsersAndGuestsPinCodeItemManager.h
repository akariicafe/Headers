@class HMHome, HMAccessory, HFPinCodeManager;

@interface HUUsersAndGuestsPinCodeItemManager : HFItemManager

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HMAccessory *accessory;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_homeFuture;
- (id)_buildItemModulesForHome:(id)a0;
- (id)initWithPinCodeManager:(id)a0 delegate:(id)a1 home:(id)a2 forAccessory:(id)a3;

@end
