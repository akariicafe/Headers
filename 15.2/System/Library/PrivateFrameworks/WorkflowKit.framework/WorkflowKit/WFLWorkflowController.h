@class NSArray, INInteraction, WFWorkflowRunEvent, WFWorkflow, NSProgress, WFWorkflowController, NSString;
@protocol WFLWorkflowControllerDelegate;

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFActionParameterInputProvider, WFSiriUserInterface>

@property (readonly, nonatomic) WFWorkflowController *controller;
@property (retain, nonatomic) INInteraction *lastInteraction;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent;
@property (weak, nonatomic) id<WFLWorkflowControllerDelegate> delegate;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSProgress *progress;
@property (nonatomic) long long executionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)runSource;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)stop;
- (void)runWithInput:(id)a0;
- (void)presentAlert:(id)a0;
- (void)showHandleInteraction:(id)a0 prompt:(id)a1 completionHandler:(id /* block */)a2;
- (void)showConfirmInteraction:(id)a0 prompt:(id)a1 requireAuthentication:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)openInteractionInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)speakText:(id)a0 completionHandler:(id /* block */)a1;
- (void)openUserActivity:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)executeIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureIntent:(id)a0;
- (BOOL)isRunningInSiri;
- (void)action:(id)a0 provideInputForParameters:(id)a1 withDefaultStates:(id)a2 prompts:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)action:(id)a0 canProvideInputForParameter:(id)a1;
- (void)workflowControllerWillRun:(id)a0;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (BOOL)workflowController:(id)a0 handleUnsupportedEnvironmentForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (id)userInterfaceForWorkflowController:(id)a0;
- (void)launchAppWithCompletionHandler:(id /* block */)a0;
- (void)showConfirmInteraction:(id)a0 requireAuthentication:(BOOL)a1 requireConfirmation:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
