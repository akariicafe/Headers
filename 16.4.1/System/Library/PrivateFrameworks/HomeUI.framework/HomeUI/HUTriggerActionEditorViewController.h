@class NSString, HUTriggerActionEditorContentViewController, HUForwardingTriggerActionBuilderDelegate, HFTriggerBuilder;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerActionEditorViewController : HUInstructionsTableViewController <WFHomeWorkflowEditorViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HUTriggerActionEditorContentViewController *actionEditorContentViewController;
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (id)createTriggerActionEditorViewControllerForHome:(id)a0 withTriggerActionSetBuilder:(id)a1 andTriggerActionBuilderEditorDelegate:(id)a2;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_informUserShortcutsAreNotSupportedInThisHome;
- (void)_showShortcutsEditor;
- (void)_showShortcutsEditorIfPossible;
- (void)homeWorkflowEditorViewController:(id)a0 didFinishWithHomeWorkflow:(id)a1 includesSecureAccessory:(BOOL)a2;
- (id)initWithInstructionsItem:(id)a0 contentViewController:(id)a1;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 delegate:(id)a2;
- (id)initWithTriggerBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
