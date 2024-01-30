@class HFUserItem, HUPersonalRequestsDevicesItemModule, HFStaticItemProvider, HMAssistantAccessControl, HMUser, HFItem, HMHome;

@interface HUPersonalRequestsEditorItemManager : HFItemManager

@property (retain, nonatomic) HUPersonalRequestsDevicesItemModule *prDevicesModule;
@property (readonly, nonatomic) HMHome *homeForUser;
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (nonatomic) BOOL onlyShowDeviceSwitches;
@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) HFItem *requireAuthenticationForSecureRequestsItem;
@property (readonly, nonatomic) HFItem *neverRequireAuthenticationItem;
@property (nonatomic) BOOL personalRequestsAuthenticationRequired;
@property (readonly, nonatomic) HFItem *activityNotificationsItem;
@property (nonatomic) BOOL activityNotificationsEnabled;
@property (readonly, nonatomic) HFItem *activityNotificationFooterItem;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 userItem:(id)a1 onlyShowDeviceSwitches:(BOOL)a2;
- (id)_commitUpdateToAccessControl:(id)a0;
- (id)initWithDelegate:(id)a0 userItem:(id)a1 accessorySettingItem:(id)a2 module:(id)a3 onlyShowDeviceSwitches:(BOOL)a4;
- (BOOL)_arePersonalRequestsEnabled;

@end
