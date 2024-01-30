@interface WFAddNewContactAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;
+ (void)contactFromParameters:(id)a0 completionHandler:(id /* block */)a1;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runWithoutUI;

@end
