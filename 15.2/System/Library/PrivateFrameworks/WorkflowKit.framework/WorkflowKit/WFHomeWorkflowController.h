@class WFHomeWorkflow, NSString, WFOutOfProcessWorkflowController;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate>

@property (readonly, nonatomic) WFOutOfProcessWorkflowController *workflowController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) WFHomeWorkflow *workflow;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkflow:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 reference:(id)a2 dialogAttributions:(id)a3;
- (void)cancel;

@end
