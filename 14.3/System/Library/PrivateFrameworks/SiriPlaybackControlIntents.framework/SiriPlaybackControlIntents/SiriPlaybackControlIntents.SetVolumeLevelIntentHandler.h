@interface SiriPlaybackControlIntents.SetVolumeLevelIntentHandler : NSObject <SetVolumeLevelIntentHandling> {
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ userDefaultsProvider;
    void /* unknown type, empty encoding */ audioSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSetVolumeLevel:(id)a0 completion:(id /* block */)a1;
- (void)confirmSetVolumeLevel:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeviceForSetVolumeLevel:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveVolumeLevelForSetVolumeLevel:(id)a0 withCompletion:(id /* block */)a1;

@end
