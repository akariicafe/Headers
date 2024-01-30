@interface SiriPlaybackControlIntents.AddSpeakerIntentHandler : NSObject <AddSpeakerIntentHandling> {
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ aceServiceHelper;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmAddSpeaker:(id)a0 completion:(id /* block */)a1;
- (void)handleAddSpeaker:(id)a0 completion:(id /* block */)a1;
- (void)resolveDestinationsForAddSpeaker:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveSourceForAddSpeaker:(id)a0 withCompletion:(id /* block */)a1;

@end
