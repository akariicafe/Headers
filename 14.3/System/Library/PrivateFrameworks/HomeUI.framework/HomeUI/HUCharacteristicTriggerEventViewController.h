@class HFCharacteristicTriggerBuilder, HUTriggerConditionEditorItemModuleController, NSString, HUCharacteristicTriggerEventItemManager, HUCharacteristicEventOptionItem;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate>

@property (retain, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) HUCharacteristicTriggerEventItemManager *itemManager;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (id)itemModuleControllers;
- (BOOL)_canCommitTriggerBuilder;
- (id)_commitTriggerBuilder;
- (id)initWithCharacteristicTriggerBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (void)_showSummary:(id)a0;
- (void)_showActionEditor:(id)a0;
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

@end
