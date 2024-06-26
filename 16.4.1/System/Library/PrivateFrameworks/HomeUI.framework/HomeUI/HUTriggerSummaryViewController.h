@class NSString, HFTriggerBuilder, HUForwardingTriggerActionBuilderDelegate, NSSet, HUTriggerActionFlow, HUTriggerConditionEditorItemModuleController, HUTriggerSummaryItemManager, HUTriggerActionSetsModuleController;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerSummaryViewController : HUItemTableViewController <HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerActionSetsModuleControllerDelegate, UITextViewDelegate, WFHomeWorkflowEditorViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUTriggerEventsModuleControllerDelegate, HUTriggerDurationModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUTriggerMediaModuleControllerDelegate>

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (nonatomic) BOOL viewHasAppeared;
@property (readonly, nonatomic) HUTriggerSummaryItemManager *itemManager;
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate;
@property (nonatomic) BOOL isEditingExistingTrigger;
@property (copy, nonatomic) NSString *editingName;
@property (readonly, nonatomic) NSString *savedName;
@property (retain, nonatomic) HUTriggerActionFlow *flow;
@property (nonatomic) BOOL detailEditorChangedTrigger;
@property (retain, nonatomic) HUTriggerActionSetsModuleController *actionSetsModuleController;
@property (retain, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (copy, nonatomic) NSSet *prioritizedAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (id)createTriggerSummaryViewControllerForHome:(id)a0 withTriggerActionSetBuilder:(id)a1 andTriggerActionBuilderEditorDelegate:(id)a2;

- (id)commitChanges;
- (void)_addAction:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)_updateTableHeaderConfiguration;
- (BOOL)_canCommitTriggerBuilder;
- (void)_cancelShortcutEditor:(id)a0;
- (id)_commitTriggerBuilder;
- (void)_deleteTrigger:(id)a0 indexPath:(id)a1;
- (void)_removeActionsInServiceActionItem:(id)a0;
- (void)_sendNameAssignedEvent:(id)a0 error:(id)a1;
- (void)_setTriggerEnabled:(BOOL)a0;
- (void)_showEditorForTriggerBuilderItem:(id)a0;
- (void)_showShortcutEditorForTriggerBuilderItem:(id)a0;
- (void)_testTrigger;
- (void)_updateDurationModuleDynamicFooterView;
- (void)_updateTriggerBuilderName;
- (void)actionSetsModuleController:(id)a0 didUpdateTriggerBuilder:(id)a1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)childViewControllersToPreload;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (id)contentConfigurationForFooterViewAtSectionIndex:(unsigned long long)a0;
- (id)contentConfigurationForHeaderViewAtSectionIndex:(unsigned long long)a0;
- (id)currentTextForTextField:(id)a0 item:(id)a1;
- (id)defaultTextForTextField:(id)a0 item:(id)a1;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (void)durationModuleController:(id)a0 requestsScrollToItem:(id)a1;
- (void)eventsModuleController:(id)a0 pushViewController:(id)a1;
- (void)eventsModuleControllerDidUpdateTriggerBuilder:(id)a0;
- (void)homeWorkflowEditorViewController:(id)a0 didFinishWithHomeWorkflow:(id)a1 includesSecureAccessory:(BOOL)a2;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 delegate:(id)a2;
- (id)initWithTriggerBuilder:(id)a0 mode:(unsigned long long)a1 isPresentedModally:(BOOL)a2 delegate:(id)a3;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManagerDidUpdate:(id)a0;
- (id)itemTableHeaderMessage;
- (void)mediaModuleController:(id)a0 pushViewController:(id)a1;
- (id)placeholderTextForTextField:(id)a0 item:(id)a1;
- (void)serviceGridViewController:(id)a0 didTapItem:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (void)textFieldDidFinishEditing:(id)a0;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
