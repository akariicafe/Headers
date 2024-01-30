@class VMVoicemailManager, VMVoicemail;

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {
    VMVoicemailManager *_voicemailManager;
}

@property (retain, nonatomic, getter=_voicemailObject, setter=_setVoicemailObject:) VMVoicemail *voicemailObject;

- (id)_audioCategory;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (id)_audioURL;
- (void)setPlaybackCommand:(id)a0;
- (id)_voicemailManager;
- (long long)_voicemailID;
- (void)_updateVoicemailPlayedState:(id)a0 finished:(BOOL)a1;
- (unsigned long long)_audioOptions;

@end
