@class NSString, WFTrigger, UINavigationController, WFWorkflowReference, WFWorkflowRecord, WFAutomationSummaryViewController, WFTriggerManager, WFConfiguredTriggerRecord, WFWorkflow, WFDatabase;
@protocol WFEditAutomationCoordinatorDelegate;

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate>

@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord;
@property (readonly, copy, nonatomic) NSString *triggerIdentifier;
@property (retain, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) WFWorkflowReference *workflowReference;
@property (retain, nonatomic) WFWorkflowRecord *originalRecord;
@property (retain, nonatomic) WFWorkflow *editingWorkflow;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) WFAutomationSummaryViewController *automationSummaryViewController;
@property (weak, nonatomic) id<WFEditAutomationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)automationSummaryViewController:(id)a0 editTrigger:(id)a1;
- (void)automationSummaryViewController:(id)a0 editWorkflow:(id)a1;
- (void)automationSummaryViewController:(id)a0 didFinishWithTrigger:(id)a1;
- (id)initWithDatabase:(id)a0 triggerRecord:(id)a1 triggerIdentifier:(id)a2 workflowReference:(id)a3;
- (void)updateUIForShowingViewController:(id)a0;

@end
