@interface WFSubscribeToPodcastAction : WFAction

- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)contentNotFoundError;
- (id)errorSubscribingToPodcast:(unsigned int)a0;
- (id)genericSubscribeFailedError;
- (void)subscribeToPodcast:(id)a0 completion:(id /* block */)a1;

@end
