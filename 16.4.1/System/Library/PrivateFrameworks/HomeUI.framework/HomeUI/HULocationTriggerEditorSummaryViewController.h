@class HULocationTriggerEditorSummaryItemManager, NSString, HUTriggerConditionEditorItemModuleController, HFEventTriggerBuilder, HUPresenceUserPickerItemModuleController;
@protocol HUTriggerEditorDelegate;

@interface HULocationTriggerEditorSummaryViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate>

@property (readonly, nonatomic) HULocationTriggerEditorSummaryItemManager *itemManager;
@property (readonly, nonatomic) HUPresenceUserPickerItemModuleController *userPickerModuleController;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLocationEventBuilderForHome:(id)a0 eventType:(unsigned long long)a1;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_showActionEditor:(id)a0;
- (void)_showSummary:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithTriggerBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (id)itemModuleControllers;
- (void)presenceUserPickerItemModuleController:(id)a0 presentViewController:(id)a1;
- (void)regionEditor:(id)a0 didFinishWithRegion:(id)a1;
- (void)regionEditorDidCancel:(id)a0;
- (void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
