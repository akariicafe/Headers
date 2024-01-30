@class NSString, HUUserNotificationTopicListModule, HFItem, HUMatterConnectedServicesItemModule, HFPinCodeManager, HFHomeBuilder, HFItemProvider;

@interface HUEditLocationItemManager : HFItemManager <HFPinCodeManagerObserver>

@property (retain, nonatomic) HUUserNotificationTopicListModule *notificationSettingsModule;
@property (retain, nonatomic) HUMatterConnectedServicesItemModule *connectedServicesItemModule;
@property (retain, nonatomic) HFHomeBuilder *homeBuilder;
@property (retain, nonatomic) HFItem *nameItem;
@property (retain, nonatomic) HFItem *inviteUsersItem;
@property (retain, nonatomic) HFItem *wallpaperPickerItem;
@property (retain, nonatomic) HFItem *cameraItem;
@property (retain, nonatomic) HFItem *showPredictedScenes;
@property (retain, nonatomic) HFItem *chooseWallpaperItem;
@property (retain, nonatomic) HFItem *wallpaperThumbnailItem;
@property (retain, nonatomic) HFItem *detailNotesItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *soundCheckItem;
@property (retain, nonatomic) HFItem *softwareUpdateItem;
@property (retain, nonatomic) HFItem *guestsItem;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (retain, nonatomic) HFItemProvider *userItemProvider;
@property (retain, nonatomic) HFItemProvider *inviteItemProvider;
@property (retain, nonatomic) HFItem *locationServicesSettingItem;
@property (readonly, nonatomic) HFItem *audioAnalysisItem;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (BOOL)_inviteUsersItemAllowed;
- (id)_itemsToHideInSet:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithHomeBuilder:(id)a0 delegate:(id)a1;
- (id)initWithHomeBuilder:(id)a0 delegate:(id)a1 context:(unsigned long long)a2;
- (id)updateLocationServicesEnabled:(BOOL)a0;

@end
