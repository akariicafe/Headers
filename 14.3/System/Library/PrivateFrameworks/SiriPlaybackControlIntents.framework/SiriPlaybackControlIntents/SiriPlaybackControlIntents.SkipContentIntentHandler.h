@interface SiriPlaybackControlIntents.SkipContentIntentHandler : NSObject <SkipContentIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSkipContent:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSkipContent:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmSkipContent:(id)a0 completion:(id /* block */)a1;

@end
