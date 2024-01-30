@class WFLWorkflowController, NSString, INIntent;
@protocol APUIWFLIntentControllerDelegate;

@interface APUIWFLIntentController : NSObject <WFLActionUserInterface, WFLWorkflowControllerDelegate>

@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) WFLWorkflowController *workflowController;
@property (copy, nonatomic) id /* block */ intentProceedHandler;
@property (nonatomic) long long executionContext;
@property (weak, nonatomic) id<APUIWFLIntentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)begin;
- (id)workflowController:(id)a0 userInterfaceForRunningAction:(id)a1;
- (void).cxx_destruct;
- (void)workflowControllerWillRun:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)workflowControllerDidStop:(id)a0 withError:(id)a1;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (void)workflowControllerDidFinishRunning:(id)a0 withOutput:(id)a1;
- (id)initWithIntent:(id)a0;
- (void)workflowController:(id)a0 willRunAction:(id)a1 withInput:(id)a2 proceedHandler:(id /* block */)a3;
- (void)launchAppWithCompletionHandler:(id /* block */)a0;
- (void)action:(id)a0 requiresContinuingInAppWithProceedHandler:(id /* block */)a1;
- (void)handleIntentAction:(id)a0 requiresUserConfirmation:(BOOL)a1 requiresUserAuthentication:(BOOL)a2 withIntentResponse:(id)a3 proceedHandler:(id /* block */)a4;
- (void)_setWorkflowControllerExecutionContext;
- (void)logDebugInformation:(id)a0;
- (void)confirmationGranted:(BOOL)a0;

@end
