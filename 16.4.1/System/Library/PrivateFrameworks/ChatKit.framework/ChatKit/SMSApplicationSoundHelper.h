@class TLAlert;

@interface SMSApplicationSoundHelper : NSObject

@property (retain, nonatomic) TLAlert *alert;
@property (nonatomic) BOOL bulletinSuppressed;

- (void).cxx_destruct;
- (BOOL)_isPlaySoundEnabled;
- (void)_playIncomingMessageSoundAndHapticForMessage:(id)a0 messageIsForCurrentTranscript:(BOOL)a1;
- (BOOL)_shouldPlayTapbackSound;
- (BOOL)allowedByScreenTimeToPlayReceiveSoundForChat:(id)a0;
- (void)playIncomingMessageSoundAndHapticForMessage:(id)a0 messageIsForCurrentTranscript:(BOOL)a1;
- (void)playSendSoundForMessage:(id)a0;
- (BOOL)playTapbackReceivedSoundForMessageInCurrentTranscript:(id)a0;
- (void)stopPlayingAlert;

@end
