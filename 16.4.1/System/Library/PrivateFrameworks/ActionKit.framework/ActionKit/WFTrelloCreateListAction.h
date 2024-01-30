@interface WFTrelloCreateListAction : WFAction

- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)updateListCacheForBoard:(id)a0 onAccount:(id)a1;

@end
