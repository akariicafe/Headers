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

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_doneButtonPressed:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_nextButtonPressed:(id)a0;
- (void)itemManagerDidUpdate:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (id)itemModuleControllers;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (BOOL)_canCommitTriggerBuilder;
- (id)_commitTriggerBuilder;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)_validateNextButton;
- (BOOL)_canContinue;
- (void)pickerViewCell:(id)a0 didSelectValueAtIndex:(long long)a1;
- (BOOL)pickerViewCell:(id)a0 canSelectValueAtIndex:(long long)a1;
- (long long)numberOfValuesForPickerViewCell:(id)a0;
- (id)pickerViewCell:(id)a0 attributedTitleForValueAtIndex:(long long)a1;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;
- (id)initWithEventBuilderItem:(id)a0 triggerBuilder:(id)a1;

@end
