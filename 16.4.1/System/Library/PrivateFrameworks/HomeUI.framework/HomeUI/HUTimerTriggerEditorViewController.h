@class HFItem, HUTimerTriggerEditorItemManager, HFTimerTriggerBuilder, NSArray, NSString, NSDateComponents, HUGridLayoutOptions, HUTriggerConditionEditorItemModuleController;
@protocol HUTriggerEditorDelegate;

@interface HUTimerTriggerEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate>

@property (retain, nonatomic) HUTimerTriggerEditorItemManager *itemManager;
@property (retain, nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (retain, nonatomic) HFItem *selectedDateOptionItem;
@property (retain, nonatomic) NSDateComponents *selectedFireTimeComponents;
@property (retain, nonatomic) NSArray *selectedRecurrences;
@property (retain, nonatomic) NSDateComponents *selectedSignificantEventOffset;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_cancel:(id)a0;
- (id)_localizedRecurrenceDescription;
- (BOOL)_canCommitTriggerBuilder;
- (BOOL)_canContinue;
- (void)_changeFireTime:(id)a0;
- (id)_commitTriggerBuilder;
- (id)_instructionsSectionIDs;
- (id)_selectedSignificantEvent;
- (void)_showActionEditor:(id)a0;
- (void)_showSummary:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (void)datePickerCell:(id)a0 didSelectDate:(id)a1;
- (void)dayOfWeekPickerCell:(id)a0 didChangeSelectedRecurrences:(id)a1;
- (id)initWithTimerTriggerBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (id)itemModuleControllers;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)timerTriggerOffsetEditor:(id)a0 didFinishWithOffset:(id)a1;
- (void)timerTriggerOffsetEditorDidCancel:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
