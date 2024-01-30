@class HUAccessorySettingsProfileModule;

@interface HUAccessorySettingsProfileItemManager : HFItemManager

@property (retain, nonatomic) HUAccessorySettingsProfileModule *profileModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 accessoryGroupItem:(id)a1;

@end
