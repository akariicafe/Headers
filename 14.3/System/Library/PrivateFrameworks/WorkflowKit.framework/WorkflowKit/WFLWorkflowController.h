@class INInteraction, NSProgress, WFWorkflow, NSString, WFWorkflowController, NSArray;
@protocol WFLWorkflowControllerDelegate;

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFSiriUserInterface>

@property (readonly, nonatomic) WFWorkflowController *controller;
@property (retain, nonatomic) INInteraction *lastInteraction;
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
- (void).cxx_destruct;
- (void)workflowControllerWillRun:(id)a0;
- (id)initWithWorkflow:(id)a0;
- (void)stop;
- (id)runSource;
- (void)runWithInput:(id)a0;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (void)presentAlert:(id)a0;
- (void)showHandleInteraction:(id)a0 prompt:(id)a1 completionHandler:(id /* block */)a2;
- (void)showConfirmInteraction:(id)a0 prompt:(id)a1 requireAuthentication:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)openInteractionInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)speakText:(id)a0 completionHandler:(id /* block */)a1;
- (void)openUserActivity:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)executeIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureIntent:(id)a0;
- (BOOL)isRunningInSiri;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowController:(id)a0 userInterfaceForAction:(id)a1;
- (void)launchAppWithCompletionHandler:(id /* block */)a0;
- (void)showConfirmInteraction:(id)a0 requireAuthentication:(BOOL)a1 requireConfirmation:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
