@class WFWorkflowConflict, NSString, WFWorkflow, UIBarButtonItem;
@protocol WFWorkflowConflictViewControllerDelegate;

@interface WFWorkflowConflictViewController : UITableViewController <UINavigationControllerDelegate>

@property (weak, nonatomic) UIBarButtonItem *keepItem;
@property (retain, nonatomic) WFWorkflow *workflowBeingPreviewed;
@property (weak, nonatomic) id<WFWorkflowConflictViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFWorkflowConflict *conflict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)cancelPressed;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithConflict:(id)a0;
- (void)keepPressed;
- (void)updateKeepButton;
- (id)workflowForRow:(unsigned long long)a0;

@end
