@class NSArray, HFAccessorySettingItem, HFStaticItem;

@interface HUPlaybackInfluencesItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *useListeningHistoryItem;
@property (readonly, nonatomic) NSArray *playbackInfluencesOptionItems;
@property (readonly, nonatomic) HFAccessorySettingItem *settingItem;
@property (retain, nonatomic) HFStaticItem *selectedItem;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 settingItem:(id)a1;
- (id)updateUseListeningHistorySetting:(BOOL)a0;
- (id)playbackInfluencesSetting;
- (BOOL)playbackInfluencesFollowUser;

@end
