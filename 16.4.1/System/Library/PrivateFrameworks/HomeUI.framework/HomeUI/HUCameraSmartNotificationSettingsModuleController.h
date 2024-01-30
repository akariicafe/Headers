@class NSString;
@protocol HUCameraSmartNotificationSettingsModuleControllerDelegate;

@interface HUCameraSmartNotificationSettingsModuleController : HUItemModuleController <HUSwitchCellDelegate>

@property (weak, nonatomic) id<HUCameraSmartNotificationSettingsModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisplayAlertForItem:(id)a0 withSmartDetectionModule:(id)a1 forProfile:(id)a2;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (id)alertMessageForEventType:(unsigned long long)a0;
- (id)alertTitleForEventType:(unsigned long long)a0;
- (BOOL)canEnableNotificationForItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)displayAlertForItemCell:(id)a0;
- (BOOL)isItemHeader:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)updateNotificationSettingForItem:(id)a0;

@end
