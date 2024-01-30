@class WFEditWorkflowViewController, NSString, WFWorkflow;

@interface VCUIEditActionViewController : UIViewController <WFEditWorkflowViewControllerDelegate>

@property (retain, nonatomic) WFEditWorkflowViewController *workflowViewController;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
