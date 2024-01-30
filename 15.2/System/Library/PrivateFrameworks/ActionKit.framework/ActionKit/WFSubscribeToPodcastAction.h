@interface WFSubscribeToPodcastAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)contentNotFoundError;
- (void)subscribeToPodcast:(id)a0 completion:(id /* block */)a1;
- (id)genericSubscribeFailedError;
- (id)errorSubscribingToPodcast:(unsigned int)a0;

@end
