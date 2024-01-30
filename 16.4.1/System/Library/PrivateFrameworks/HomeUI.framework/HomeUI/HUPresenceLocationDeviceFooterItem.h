@class HUPresenceCurrentUserLocationDevice, HULocationDeviceManager, HMHome;

@interface HUPresenceLocationDeviceFooterItem : HFItem

@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice;
@property (nonatomic) BOOL useSingleUserStyle;
@property (readonly, nonatomic) HMHome *home;

+ (id)_locationDeviceTextForDeviceNameString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_homeHubNeedsUpdateWarningText;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)a0;
- (id)_someUsersNeedSoftwareUpdateWarningText;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 selectedLocationDevice:(id)a1 locationDeviceManager:(id)a2 useSingleUserStyle:(BOOL)a3;

@end
