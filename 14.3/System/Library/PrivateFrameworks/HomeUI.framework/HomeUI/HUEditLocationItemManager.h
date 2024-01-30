@class HFHomeBuilder, HFItem, HUUserNotificationTopicListModule;

@interface HUEditLocationItemManager : HFItemManager

@property (retain, nonatomic) HUUserNotificationTopicListModule *notificationSettingsModule;
@property (retain, nonatomic) HFHomeBuilder *homeBuilder;
@property (retain, nonatomic) HFItem *nameItem;
@property (retain, nonatomic) HFItem *usersItem;
@property (retain, nonatomic) HFItem *inviteUsersItem;
@property (retain, nonatomic) HFItem *wallpaperPickerItem;
@property (retain, nonatomic) HFItem *cameraItem;
@property (retain, nonatomic) HFItem *chooseWallpaperItem;
@property (retain, nonatomic) HFItem *wallpaperThumbnailItem;
@property (retain, nonatomic) HFItem *detailNotesItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *softwareUpdateItem;
@property (retain, nonatomic) HFItem *accessControlItem;
@property (retain, nonatomic) HFItem *bridgesAndResidentDevicesItem;
@property (retain, nonatomic) HFItem *networkRoutersListItem;
@property (readonly, nonatomic) unsigned long long context;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithHomeBuilder:(id)a0 delegate:(id)a1;
- (id)initWithHomeBuilder:(id)a0 delegate:(id)a1 context:(unsigned long long)a2;

@end
