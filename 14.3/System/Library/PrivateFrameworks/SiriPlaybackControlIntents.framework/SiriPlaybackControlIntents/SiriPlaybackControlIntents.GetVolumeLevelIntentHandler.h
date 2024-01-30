@interface SiriPlaybackControlIntents.GetVolumeLevelIntentHandler : NSObject <GetVolumeLevelIntentHandling> {
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetVolumeLevel:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeviceForGetVolumeLevel:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmGetVolumeLevel:(id)a0 completion:(id /* block */)a1;

@end
