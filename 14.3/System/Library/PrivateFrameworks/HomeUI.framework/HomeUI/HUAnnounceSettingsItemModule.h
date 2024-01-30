@class HMHome, HUAnnounceNotificationSettingsItemProvider, HFItemProvider, HFUserItemProvider;

@interface HUAnnounceSettingsItemModule : HFItemModule

@property (retain, nonatomic) HUAnnounceNotificationSettingsItemProvider *notificationSettingsItemProvider;
@property (retain, nonatomic) HFItemProvider *announceDeviceItemProvider;
@property (retain, nonatomic) HFUserItemProvider *userItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long settingsContext;

+ (id /* block */)_userItemComparator;
+ (id /* block */)_announceDeviceItemComparator;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)updateNotificationSettings:(id)a0;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 settingsContext:(unsigned long long)a2;
- (id)enableAnnounceSetting:(BOOL)a0 forItem:(id)a1;
- (id)enablePermissionSetting:(BOOL)a0 forItem:(id)a1;
- (id)_updateNotificationSettings:(id)a0;

@end
