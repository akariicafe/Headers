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

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithError:(id)a1 cancelled:(BOOL)a2 reference:(id)a3 dialogAttribution:(id)a4;

@end
