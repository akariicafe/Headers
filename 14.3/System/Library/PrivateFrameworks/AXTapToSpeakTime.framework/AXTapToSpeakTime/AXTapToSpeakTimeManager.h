@class AXTapticTimeManager, NSDateFormatter, VSSpeechSynthesizer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXTapToSpeakTimeManager : NSObject <VSSpeechSynthesizerDelegate> {
    int _ringerStateNotifyToken;
    BOOL _cachedRingerIsMuted;
    float _lastMediaVolume;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) VSSpeechSynthesizer *vsSpeechSynthesizer;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) AXTapticTimeManager *tapticTimeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_registerForNotifications;
- (void).cxx_destruct;
- (id)_currentLanguageCode;
- (void)dealloc;
- (id)_init;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didPauseSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didContinueSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRequest:(id)a2;
- (void)_unregisterForNotifications;
- (void)_denormalizeVolumeIfNecessary;
- (void)_normalizeVolumeIfNecessary;
- (void)_ringerStateChanged;
- (void)outputTime:(id)a0 preferredVoice:(unsigned long long)a1;
- (void)outputTime:(id)a0 preferredVoice:(unsigned long long)a1 withGesture:(unsigned long long)a2;
- (BOOL)_canSpeakTimeForVoice:(unsigned long long)a0 andGesture:(unsigned long long)a1;
- (void)_speakTime:(id)a0 preferredVoice:(unsigned long long)a1;
- (BOOL)_canTapticTime;
- (void)_outputTapticTime:(id)a0;
- (void)_setupAudioSessionForVoice:(unsigned long long)a0;
- (id)_getPremiumVoiceAsset;
- (void)speechOutputDidComplete;
- (void)outputTime:(id)a0;
- (void)stopOutput;
- (void)_speakTime:(id)a0 withCharacterVoiceIdentifier:(id)a1;
- (BOOL)_canOutputPremiumVoice;

@end
