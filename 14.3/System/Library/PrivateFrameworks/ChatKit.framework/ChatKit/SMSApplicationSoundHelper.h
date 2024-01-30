@class TLAlert;

@interface SMSApplicationSoundHelper : NSObject {
    TLAlert *_alert;
}

@property (nonatomic) BOOL bulletinSuppressed;

- (void).cxx_destruct;
- (BOOL)_shouldPlayTapbackSound;
- (BOOL)_isPlaySoundEnabled;
- (void)_playIncomingMessageSoundAndHapticForMessage:(id)a0 messageIsForCurrentTranscript:(BOOL)a1;
- (void)stopPlayingAlert;
- (void)playSendSoundForMessage:(id)a0;
- (BOOL)shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)a0;
- (BOOL)allowedByScreenTimeToPlayReceiveSoundForChat:(id)a0;
- (void)playIncomingMessageSoundAndHapticForMessage:(id)a0 messageIsForCurrentTranscript:(BOOL)a1;

@end
