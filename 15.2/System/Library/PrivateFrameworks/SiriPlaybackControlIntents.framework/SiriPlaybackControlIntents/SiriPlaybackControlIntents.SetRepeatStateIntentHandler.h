@interface SiriPlaybackControlIntents.SetRepeatStateIntentHandler : NSObject <SetRepeatStateIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ aceServiceHelper;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSetRepeatState:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSetRepeatState:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmSetRepeatState:(id)a0 completion:(id /* block */)a1;

@end
