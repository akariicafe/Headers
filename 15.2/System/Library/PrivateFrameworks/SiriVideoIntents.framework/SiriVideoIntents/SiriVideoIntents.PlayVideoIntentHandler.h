@interface SiriVideoIntents.PlayVideoIntentHandler : NSObject <PlayVideoIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ backgroundFetch;
    void /* unknown type, empty encoding */ signalRecorder;
    void /* unknown type, empty encoding */ userDefaultsProvider;
    void /* unknown type, empty encoding */ contentWith3pAppsProviding;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ tipService;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveContentForPlayVideo:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmPlayVideo:(id)a0 completion:(id /* block */)a1;
- (void)handlePlayVideo:(id)a0 completion:(id /* block */)a1;

@end
