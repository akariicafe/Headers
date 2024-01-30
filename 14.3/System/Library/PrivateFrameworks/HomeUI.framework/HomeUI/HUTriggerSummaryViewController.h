@class HUForwardingTriggerActionBuilderDelegate, HUTriggerActionFlow, NSSet, NSString, HFTriggerBuilder, HUTriggerSummaryActionGridViewController, HUTriggerSummaryItemManager;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerSummaryViewController : HUItemTableViewController <HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerSummaryActionGridViewControllerDelegate, HUTriggerDurationPickerDelegate, UITextViewDelegate, WFHomeComposeViewControllerDelegate, HUMediaSelectionViewControllerDelegate>

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (nonatomic) BOOL viewHasAppeared;
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *actionSetsGridViewController;
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *serviceActionsGridViewController;
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *prioritizedServiceActionsGridViewController;
@property (readonly, nonatomic) HUTriggerSummaryItemManager *itemManager;
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate;
@property (nonatomic) BOOL isEditingExistingTrigger;
@property (retain, nonatomic) HUTriggerActionFlow *flow;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (copy, nonatomic) NSSet *prioritizedHomeObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (id)createTriggerSummaryViewControllerForHome:(id)a0 withTriggerActionSetBuilder:(id)a1 andTriggerActionBuilderEditorDelegate:(id)a2;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)_addAction:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (id)childViewControllersToPreload;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 delegate:(id)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)serviceGridViewController:(id)a0 didTapItem:(id)a1;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)a0;
- (id)mediaSelectionViewController:(id)a0 messageForMediaPickerUnavailableReason:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (BOOL)_canCommitTriggerBuilder;
- (void)_commitTriggerBuilder;
- (void)_cancelShortcutEditor:(id)a0;
- (id)_durationEventBuilder;
- (void)_updateTableHeaderConfiguration;
- (void)_showEditorForTriggerBuilderItem:(id)a0;
- (void)_showShortcutEditorForTriggerBuilderItem:(id)a0;
- (void)_testTrigger;
- (void)_deleteTrigger:(id)a0 indexPath:(id)a1;
- (void)_presentMediaSelection;
- (void)_setTriggerEnabled:(BOOL)a0;
- (void)triggerSummaryActionGridViewController:(id)a0 didUpdateTriggerBuilder:(id)a1;
- (BOOL)triggerSummaryActionGridViewController:(id)a0 shouldShowAction:(id)a1;
- (void)durationPicker:(id)a0 didSelectDuration:(id)a1;
- (void)homeComposeViewController:(id)a0 didFinishWithHomeWorkflow:(id)a1;
- (id)initWithTriggerBuilder:(id)a0 mode:(unsigned long long)a1 isPresentedModally:(BOOL)a2 delegate:(id)a3;
- (void)_removeActionsInServiceActionItem:(id)a0;
- (id)itemTableHeaderMessage;

@end
