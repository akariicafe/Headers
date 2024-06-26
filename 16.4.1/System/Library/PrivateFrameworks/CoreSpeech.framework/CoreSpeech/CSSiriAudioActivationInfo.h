@class AFClientConfiguration, NSString, NSDictionary, AFSpeechRecordingAlertPolicy, AFLanguageDetectionUserContext, NSUUID, AFExperimentContext;

@interface CSSiriAudioActivationInfo : NSObject {
    long long _activationMode;
    long long _storedActivationMode;
    long long _csAudioRecordType;
    AFClientConfiguration *_currentClientConfiguration;
    BOOL _suppressStartAlert;
    AFExperimentContext *_experimentContext;
    BOOL _isActivated;
    float _activeMediaPlaybackVolume;
}

@property (readonly, nonatomic) long long speechEvent;
@property (readonly, nonatomic) BOOL useBorealisBuffer;
@property (readonly, nonatomic) BOOL usePrelistening;
@property (readonly, nonatomic) long long audioAlertStyle;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) double activationSystemUptime;
@property (readonly, nonatomic) unsigned long long activationHostTime;
@property (readonly, nonatomic) unsigned long long buttonDownHostTime;
@property (readonly, nonatomic) unsigned long long voiceTriggerEndHostTime;
@property (nonatomic) long long speechRecordingMode;
@property (readonly, nonatomic) BOOL isOnPhoneCall;
@property (readonly, copy, nonatomic) NSDictionary *activationMetadata;
@property (readonly, nonatomic) BOOL hasPlayedStartAlert;
@property (readonly, nonatomic) long long speechEndpointerOperationMode;
@property (readonly, nonatomic) AFSpeechRecordingAlertPolicy *speechRecordingAlertPolicy;
@property (readonly, nonatomic) long long presentationMode;
@property (readonly, nonatomic) BOOL isSpokenNotification;
@property (readonly, copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext;
@property (readonly, nonatomic) long long dictationInputOrigin;
@property (readonly, copy, nonatomic) NSUUID *turnIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) unsigned long long dictationVoiceTriggerAbsStartSampleId;

- (void)setClientConfiguration:(id)a0;
- (long long)_csAudioRecordTypeForSpeechRequestOptions:(id)a0 useBorealisBuffer:(BOOL)a1 currentClientConfiguration:(id)a2;
- (id)recordContext;
- (BOOL)_isVoiceOverTouchEnabledInAccessibility;
- (BOOL)canPrepareWithoutInterruption;
- (id)recordContextForSpeechEvent:(long long)a0;
- (BOOL)shouldUseVoiceTriggerAnalyzerStyle;
- (id)initWithSpeechRecordingMode:(long long)a0 clientConfiguration:(id)a1 experimentContext:(id)a2;
- (BOOL)shouldOverrideRecordingStartingAlertBehaviorForAlertStyle:(long long)a0;
- (BOOL)canPrewarm;
- (long long)_activationMode;
- (BOOL)shouldExplicitlyPlayAlertOnStart;
- (BOOL)_eventIsRaiseToSpeak;
- (id)_audioSessionActiveDelayCoreSpeechWithType:(unsigned long long)a0;
- (BOOL)_eventIsTVRemote;
- (id)_audioSessionActiveDelayServerConfiguration;
- (long long)overrideStartingAlertBeepSoundID;
- (void)audioSessionActivated;
- (void)endUpdateToPostVoiceWithContext:(unsigned long long)a0 success:(BOOL)a1;
- (BOOL)_isRequestFromSpokenNotification:(long long)a0;
- (BOOL)shouldSuppressRecordingErrorAlert;
- (id)_audioSessionActiveDelayOverride;
- (void)setSpeechRequestOptions:(id)a0 currentActivationInfo:(id)a1;
- (id)dateByAddingTimeIntervalSinceActivation:(double)a0;
- (id)_appendDictationApplicationInfoSettings:(id)a0;
- (id)audioSessionActivationTargetDate;
- (BOOL)shouldTreatTimeoutAsHardEndpoint;
- (BOOL)shouldSuppressRecordingStopAlert;
- (id)_alertBehaviorForRecordRoute:(id)a0 recordingInfo:(id)a1 playbackRoute:(id)a2 attemptsToUsePastDataBufferFrames:(BOOL)a3;
- (BOOL)canEnterTwoShot;
- (id)recordSettingsWithOptions:(unsigned long long)a0 appendingSettings:(id)a1;
- (BOOL)_eventIsVoiceTrigger;
- (BOOL)needsUpdateToPostVoiceMode;
- (long long)_csAudioRecordType;
- (BOOL)requiresBorealisConsumerCheck;
- (BOOL)_canUseZLL;
- (unsigned long long)beginUpdateToPostVoice;
- (id)startRecordingSettingsWithRecordRoute:(id)a0 recordingInfo:(id)a1 playbackRoute:(id)a2;
- (BOOL)shouldPlayAlertIfNotPrelistening;
- (long long)_audioAlertStyleForListenAfterSpeakingWithRecordRoute:(id)a0 playbackRoute:(id)a1 echoCancellation:(BOOL)a2 useDeviceSpeakerForTTS:(long long)a3;
- (long long)event;
- (id)_audioSessionActiveDelayUserPerceptionWithType:(unsigned long long)a0;
- (id)description;
- (long long)twoShotPromptTypeForRecordRoute:(id)a0 playbackRoute:(id)a1;
- (id)startingAlertBeepURL;
- (long long)_csAudioRecordTypeForSpeechEvent:(long long)a0 currentClientConfiguration:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isVibrationDisabledInAccessibility;
- (long long)audioAlertStyleForRecordRoute:(id)a0 recordingInfo:(id)a1 playbackRoute:(id)a2;
- (BOOL)_shouldSkipStartRecordingAlertForRecordingInfo:(id)a0;
- (BOOL)canGetPCMStream;
- (BOOL)isVoiceOverTouchEnabled;

@end
