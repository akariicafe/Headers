@class HFItem, HUTriggerConditionEditorItemModuleController, HUCameraSmartNotificationSettingsModuleController, NSString, HUStatusAndNotificationsItemManager;
@protocol HFServiceLikeItem;

@interface HUStatusAndNotificationsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUCameraSmartNotificationSettingsModuleControllerDelegate>

@property (readonly, nonatomic) HUStatusAndNotificationsItemManager *itemManager;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (readonly, nonatomic) HUCameraSmartNotificationSettingsModuleController *cameraSmartSettingsModuleController;
@property (nonatomic) BOOL showStatusSection;
@property (nonatomic) BOOL useServiceNameAsTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (id)itemModuleControllers;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 didUpdateConditionCollection:(id)a1;
- (void)smartNotificationSettingsModuleController:(id)a0 didUpdateConditionCollection:(id)a1;
- (id)initWithServiceItem:(id)a0 inHome:(id)a1 displayingDetails:(BOOL)a2;

@end
