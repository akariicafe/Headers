@interface HUUserNotificationTopicServiceListModuleController : HUItemTableModuleController

- (BOOL)canSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (unsigned long long)didSelectItem:(id)a0;
- (id)showNotificationSettingsForServiceLikeItem:(id)a0 animated:(BOOL)a1;

@end
