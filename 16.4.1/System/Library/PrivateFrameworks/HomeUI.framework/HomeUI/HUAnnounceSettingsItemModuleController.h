@class NSString;

@interface HUAnnounceSettingsItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate, HUUserSwitchCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)didSelectItem:(id)a0;
- (void)_populateHostInformation:(id)a0;
- (void)_submitAnalyticsForAnnounceHomePodSettingItem:(id)a0 enabled:(BOOL)a1 writeWasSuccessfull:(BOOL)a2;
- (void)_submitAnalyticsForAnnounceNotificationSettingItem:(id)a0 writeWasSuccessfull:(BOOL)a1;
- (void)_submitAnalyticsForAnnounceUserSettingItem:(id)a0 enabled:(BOOL)a1 writeWasSuccessfull:(BOOL)a2;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)userSwitchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
