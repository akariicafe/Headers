@interface SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetSubtitleState:(id)a0 completion:(id /* block */)a1;
- (void)handleSetSubtitleState:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeviceForSetSubtitleState:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLanguageForSetSubtitleState:(id)a0 withCompletion:(id /* block */)a1;

@end
