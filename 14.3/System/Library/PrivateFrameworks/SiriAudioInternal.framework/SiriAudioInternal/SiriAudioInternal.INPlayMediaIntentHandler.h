@interface SiriAudioInternal.INPlayMediaIntentHandler : NSObject <INPlayMediaIntentHandling> {
    void /* unknown type, empty encoding */ playbackService;
    void /* unknown type, empty encoding */ localSearch;
    void /* unknown type, empty encoding */ deviceProvider;
    void /* unknown type, empty encoding */ nowPlaying;
}

- (id)init;
- (void)handlePlayMedia:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForPlayMedia:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
