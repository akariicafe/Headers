@interface WFAddToReadingListAction : WFAction

- (id)service;
- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)addReadingListItem:(id)a0 title:(id)a1 previewText:(id)a2 withService:(id)a3 error:(id *)a4;

@end
