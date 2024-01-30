@interface WFPrintAction : WFAction

+ (id)userInterfaceProtocol;

- (id)contentDestinationWithError:(id *)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
