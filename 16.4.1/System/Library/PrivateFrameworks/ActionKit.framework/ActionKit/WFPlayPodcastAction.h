@interface WFPlayPodcastAction : WFAction

- (id)localizedKeyParameterDisplayName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (id)contentNotFoundError;
- (id)errorPlayingPodcast:(unsigned int)a0;
- (id)genericPlayPodcastFailedError;
- (id)getPlaybackURLForContentItem:(id)a0;
- (void)playQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 onPlayerPath:(void *)a1 completion:(id /* block */)a2;

@end
