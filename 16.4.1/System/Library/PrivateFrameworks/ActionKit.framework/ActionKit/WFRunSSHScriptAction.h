@class NSString;

@interface WFRunSSHScriptAction : WFAction <NMSSHSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)session:(id)a0 didDisconnectWithError:(id)a1;
- (void)authenticateAndRunAsynchronouslyWithInput:(id)a0 session:(id)a1;
- (void)finishRunningSSHScriptWithError:(id)a0;

@end
