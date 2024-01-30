@class HUMediaServiceItem, HFItem, HFUserItem, HUAccessorySettingsItemModule, HMHome;

@interface HUMediaServiceItemManager : HFItemManager

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFItem *updateListeningHistoryItem;
@property (retain, nonatomic) HFItem *updateListeningHistoryFooterItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *reconnectItem;
@property (retain, nonatomic) HFItem *reconnectTitleItem;
@property (retain, nonatomic) HUMediaServiceItem *mediaServiceItem;
@property (retain, nonatomic) HFUserItem *userItem;
@property (retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_hasAuthFatalError;
- (BOOL)_isAppleMusicService;
- (id)initWithHome:(id)a0 mediaServiceItem:(id)a1 delegate:(id)a2;

@end
