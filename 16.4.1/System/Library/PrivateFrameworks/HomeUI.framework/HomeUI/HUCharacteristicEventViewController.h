@class HUCharacteristicEventOptionItem, NSString, HUTriggerConditionEditorItemModuleController, HFEventTriggerBuilder, HUCharacteristicEventItemManager, HUEventUIFlow, HFCharacteristicEventBuilderItem;

@interface HUCharacteristicEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate, HUEventUIFlowViewController>

@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) HUCharacteristicEventItemManager *itemManager;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem;
@property (retain, nonatomic) HUEventUIFlow *flow;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_doneButtonPressed:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_nextButtonPressed:(id)a0;
- (BOOL)_canCommitTriggerBuilder;
- (BOOL)_canContinue;
- (id)_commitTriggerBuilder;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;
- (void)_validateNextButton;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (id)initWithEventBuilderItem:(id)a0 triggerBuilder:(id)a1;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;
- (void)itemManagerDidUpdate:(id)a0;
- (id)itemModuleControllers;
- (long long)numberOfValuesForPickerViewCell:(id)a0;
- (id)pickerViewCell:(id)a0 attributedTitleForValueAtIndex:(long long)a1;
- (BOOL)pickerViewCell:(id)a0 canSelectValueAtIndex:(long long)a1;
- (void)pickerViewCell:(id)a0 didSelectValueAtIndex:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
