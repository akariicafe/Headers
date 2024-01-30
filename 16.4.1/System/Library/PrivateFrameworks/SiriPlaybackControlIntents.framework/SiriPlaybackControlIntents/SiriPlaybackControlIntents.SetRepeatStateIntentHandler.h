@interface SiriPlaybackControlIntents.SetRepeatStateIntentHandler : NSObject <SetRepeatStateIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetRepeatState:(id)a0 completion:(id /* block */)a1;
- (void)handleSetRepeatState:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSetRepeatState:(id)a0 withCompletion:(id /* block */)a1;

@end
