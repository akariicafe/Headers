@interface SiriVideoIntents.PlayLiveServiceIntentHandler : NSObject <PlayLiveServiceIntentHandling> {
    void /* unknown type, empty encoding */ liveServiceResolver;
    void /* unknown type, empty encoding */ analyticsService;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveLiveServiceForPlayLiveService:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmPlayLiveService:(id)a0 completion:(id /* block */)a1;
- (void)handlePlayLiveService:(id)a0 completion:(id /* block */)a1;

@end
