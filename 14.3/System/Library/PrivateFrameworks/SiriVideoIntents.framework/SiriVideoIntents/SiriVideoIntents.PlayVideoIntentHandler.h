@interface SiriVideoIntents.PlayVideoIntentHandler : NSObject <PlayVideoIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ backgroundFetch;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveContentForPlayVideo:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmPlayVideo:(id)a0 completion:(id /* block */)a1;
- (void)handlePlayVideo:(id)a0 completion:(id /* block */)a1;

@end
