@interface WFGetEpisodesForPodcastAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)getPodcastEpisodesWithIdentifiers:(id)a0 withCompletion:(id /* block */)a1;

@end
