@interface SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSetAudioLanguage:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeviceForSetAudioLanguage:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveLanguageForSetAudioLanguage:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmSetAudioLanguage:(id)a0 completion:(id /* block */)a1;

@end
