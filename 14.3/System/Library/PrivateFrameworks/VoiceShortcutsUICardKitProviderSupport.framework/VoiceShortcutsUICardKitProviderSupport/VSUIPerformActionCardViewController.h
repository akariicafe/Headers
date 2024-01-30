@class NSString, NSMutableDictionary, WFLWorkflowController;

@interface VSUIPerformActionCardViewController : VSUIProgressCardViewController <WFLWorkflowControllerDelegate>

@property (retain, nonatomic) WFLWorkflowController *currentWorkflowController;
@property (retain, nonatomic) NSMutableDictionary *commandWorkflowControllersDictionary;
@property (retain, nonatomic) NSMutableDictionary *commandCompletionBlocksDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowControllerWillRun:(id)a0;
- (id)progress;
- (void)workflowControllerDidStop:(id)a0 withError:(id)a1;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (void)workflowControllerDidFinishRunning:(id)a0 withOutput:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)handleCardCommand:(id)a0 reply:(id /* block */)a1;
- (void)_setUpHelpers;
- (void)_handleCardCommand:(id)a0 reply:(id /* block */)a1;
- (id)_commandIdentifierForWorkflowController:(id)a0;
- (void)_releaseWorkflowController:(id)a0;

@end
