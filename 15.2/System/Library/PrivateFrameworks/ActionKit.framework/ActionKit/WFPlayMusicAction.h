@interface WFPlayMusicAction : WFAction

- (long long)shuffleMode;
- (long long)repeatMode;
- (BOOL)hasPlaybackArchive;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (void)finishRunningWithError:(id)a0;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (void)getContentFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (id)mediaQueryFromMediaCollection:(id)a0;
- (void)playContentViaMPCAssistant:(id)a0 routeDescriptor:(id)a1;
- (void)sendPlaybackArchive:(id)a0 orPlaybackQueue:(id)a1 toDestination:(id)a2 completion:(id /* block */)a3;
- (void)playContentViaMusicPlayer:(id)a0;
- (void)playContent:(id)a0 withMusicPlayer:(id)a1 completionHandler:(id /* block */)a2;

@end
