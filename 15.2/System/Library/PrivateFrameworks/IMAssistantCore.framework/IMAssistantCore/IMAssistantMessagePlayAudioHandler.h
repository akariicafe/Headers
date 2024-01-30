@class NSString, IMAssistantAudioPlayer;

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler <IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling> {
    IMAssistantAudioPlayer *_audioPlayer;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handlePlayAudioMessage:(id)a0 completion:(id /* block */)a1;
- (void)confirmPlayAudioMessage:(id)a0 completion:(id /* block */)a1;
- (void)imAssistantAudioPlayer:(id)a0 didUpdateState:(long long)a1;
- (id)createAudioPlayerWithIdentifier:(id)a0;
- (void)queryAudioMessageURLForIntent:(id)a0 completion:(id /* block */)a1;
- (id)activeAudioPlayer;

@end
