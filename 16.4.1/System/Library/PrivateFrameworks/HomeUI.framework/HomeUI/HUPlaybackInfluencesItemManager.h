@class NSArray, HUHomeKitAccessorySettingsItemModule, HFAccessorySettingItem, HFStaticItem;

@interface HUPlaybackInfluencesItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *useListeningHistoryItem;
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *accessorySettingsModule;
@property (readonly, nonatomic) NSArray *playbackInfluencesOptionItems;
@property (readonly, nonatomic) HFAccessorySettingItem *settingItem;
@property (retain, nonatomic) HFStaticItem *selectedItem;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 module:(id)a1 homeKitAccessorySettingItem:(id)a2;
- (id)initWithDelegate:(id)a0 settingItem:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (BOOL)playbackInfluencesFollowUser;
- (id)playbackInfluencesSetting;
- (id)updateUseListeningHistorySetting:(BOOL)a0;

@end
