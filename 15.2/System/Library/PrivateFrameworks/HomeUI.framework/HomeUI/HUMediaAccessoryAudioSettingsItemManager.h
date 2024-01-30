@class HFMediaSystemBuilder, HFItem;

@interface HUMediaAccessoryAudioSettingsItemManager : HFItemManager

@property (readonly, nonatomic) HFItem *audioSettingsItem;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;

- (void).cxx_destruct;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithMediaSystemBuilder:(id)a0 sourceItem:(id)a1 delegate:(id)a2;

@end
