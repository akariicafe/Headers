@class HFItem, NSSet, HMAccessory, HMHome;

@interface HUTelevisionSettingsItemModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HFItem *showPowerModeSelectionItem;

+ (id)_powerModeSelectionCharacteristicForAccessory:(id)a0;
+ (BOOL)_supportsAccessory:(id)a0;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)itemProviders;
- (id)showPowerModeSelection;
- (void)_createItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 accessory:(id)a2;

@end
