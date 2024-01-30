@class NSString;
@protocol MNNavigationAudioSessionDelegate;

@interface MNNavigationAudioSession : NSObject <MNAudioSession>

@property (nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) NSString *language;
@property (nonatomic) unsigned long long appContext;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) BOOL muteSpeechOverride;
@property (weak, nonatomic) id<MNNavigationAudioSessionDelegate> delegate;
@property (nonatomic) unsigned long long voiceGuidanceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionOfType:(unsigned long long)a0 language:(id)a1;

- (void)endSession;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)beginSession;
- (BOOL)isSpeaking;
- (void)prepareToAnnounce;
- (void)speak:(id)a0 shortPromptType:(unsigned long long)a1 ignorePromptStyle:(BOOL)a2 minimumRequiredLevel:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (void)speak:(id)a0 shortPromptType:(unsigned long long)a1 ignorePromptStyle:(BOOL)a2 completionBlock:(id /* block */)a3;
- (BOOL)vibrateForPrompt:(unsigned long long)a0;
- (void)clearAllAnnouncements;
- (BOOL)_deviceSettingsAllowSpeech;
- (BOOL)_isVoiceGuidanceEnabled;
- (BOOL)_beepIfNecessaryWithShortPromptType:(unsigned long long)a0 textToSpeak:(id)a1;
- (void)_speak:(id)a0 fallbackPrompt:(unsigned long long)a1 completionBlock:(id /* block */)a2;

@end
