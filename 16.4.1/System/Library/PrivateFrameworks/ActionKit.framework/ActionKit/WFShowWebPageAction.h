@interface WFShowWebPageAction : WFAction

+ (id)userInterfaceProtocol;

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
