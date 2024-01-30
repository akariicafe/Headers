@interface HUUserNotificationTopicListModuleController : HUItemTableModuleController

- (BOOL)canSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (id)showNotificationSettingsForHomeKitObject:(id)a0 animated:(BOOL)a1;
- (id)presentNotificationSettingsForTopic:(id)a0 animated:(BOOL)a1;

@end
