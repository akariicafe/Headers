@interface SiriPlaybackControlIntents.SetPlaybackSpeedIntentHandler : NSObject <SetPlaybackSpeedIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetPlaybackSpeed:(id)a0 completion:(id /* block */)a1;
- (void)handleSetPlaybackSpeed:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSetPlaybackSpeed:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolvePlaybackSpeedTypeForSetPlaybackSpeed:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveSpeedMagnitudeForSetPlaybackSpeed:(id)a0 withCompletion:(id /* block */)a1;

@end
