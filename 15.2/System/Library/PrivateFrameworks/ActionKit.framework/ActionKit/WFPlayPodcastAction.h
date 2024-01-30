@interface WFPlayPodcastAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (void)playQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 onPlayerPath:(void *)a1 completion:(id /* block */)a2;
- (id)getPlaybackURLForContentItem:(id)a0;
- (id)contentNotFoundError;
- (id)genericPlayPodcastFailedError;
- (id)errorPlayingPodcast:(unsigned int)a0;

@end
