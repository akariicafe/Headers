@class NSString, WFWorkflow, WFIconComposeViewController, WFWorkflowWizardNameConfiguration;
@protocol WFWorkflowWizardNameViewControllerDelegate;

@interface WFWorkflowWizardNameViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameSuggestionCellDelegate>

@property (retain, nonatomic) NSString *updatedName;
@property (weak, nonatomic) WFIconComposeViewController *iconComposeViewController;
@property (weak, nonatomic) id<WFWorkflowWizardNameViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFWorkflowWizardNameConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)didTapDone;
- (void).cxx_destruct;
- (id)infoText;
- (void)viewDidAppear:(BOOL)a0;
- (id)nameCell;
- (id)workflowName;
- (void)workflowWizardNameCellDidFinishEditing:(id)a0;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)a0;
- (void)workflowWizardNameCell:(id)a0 didUpdateName:(id)a1;
- (void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)a0;
- (id)initWithWorkflow:(id)a0 configuration:(id)a1;
- (void)updateDoneButtonForName:(id)a0;
- (void)iconComposeViewControllerDidTapDone;
- (id)suggestedPhrases;
- (id)nameSuggestionCell;
- (void)updateNameCell:(id)a0;
- (id)dequeueNameCellAtIndexPath:(id)a0;
- (id)dequeueNameSuggestionCellAtIndexPath:(id)a0;

@end
