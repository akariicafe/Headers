@class HFPinCodeManager;

@interface HUUserNotificationTopicListModuleController : HUItemTableModuleController

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;

- (BOOL)canSelectItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (id)showNotificationSettingsForHomeKitObject:(id)a0 animated:(BOOL)a1;
- (id)presentNotificationSettingsForTopic:(id)a0 animated:(BOOL)a1;

@end
