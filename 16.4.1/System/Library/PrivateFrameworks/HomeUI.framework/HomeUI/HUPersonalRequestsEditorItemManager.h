@class HFUserItem, HUPersonalRequestsDevicesItemModule, HFStaticItemProvider, HMAssistantAccessControl, HMUser, HFItem, HMHome;

@interface HUPersonalRequestsEditorItemManager : HFItemManager

@property (retain, nonatomic) HUPersonalRequestsDevicesItemModule *prDevicesModule;
@property (readonly, nonatomic) HMHome *homeForUser;
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (nonatomic) BOOL onlyShowDeviceSwitches;
@property (readonly, nonatomic) HMUser *user;
@property (nonatomic) BOOL personalRequestsAuthenticationRequired;
@property (readonly, nonatomic) HFItem *activityNotificationsItem;
@property (nonatomic) BOOL activityNotificationsEnabled;
@property (readonly, nonatomic) HFItem *activityNotificationFooterItem;

- (void).cxx_destruct;
- (BOOL)_arePersonalRequestsEnabled;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_commitUpdateToAccessControl:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithDelegate:(id)a0 userItem:(id)a1 accessorySettingItem:(id)a2 module:(id)a3 onlyShowDeviceSwitches:(BOOL)a4;
- (id)initWithDelegate:(id)a0 userItem:(id)a1 onlyShowDeviceSwitches:(BOOL)a2;

@end
