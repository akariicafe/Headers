@interface WFTrelloCreateBoardAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)updateBoardCacheOnAccount:(id)a0;

@end
