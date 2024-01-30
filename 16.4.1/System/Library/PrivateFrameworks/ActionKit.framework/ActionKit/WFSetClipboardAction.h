@interface WFSetClipboardAction : WFAction

- (id)contentDestinationWithError:(id *)a0;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)pasteboardDidChange:(id)a0;

@end
