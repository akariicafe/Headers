@class AVSpeechSynthesizer, NSDateFormatter, VSSpeechSynthesizer, AXTapticTimeManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXTapToSpeakTimeManager : NSObject <AVSpeechSynthesizerDelegate, VSSpeechSynthesizerDelegate> {
    int _ringerStateNotifyToken;
    BOOL _cachedRingerIsMuted;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) VSSpeechSynthesizer *vsSpeechSynthesizer;
@property (readonly, nonatomic) AVSpeechSynthesizer *avSpeechSynthesizer;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) AXTapticTimeManager *tapticTimeManager;
@property (nonatomic) float lastMediaVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_registerForNotifications;
- (id)_init;
- (void)dealloc;
- (void)_unregisterForNotifications;
- (void).cxx_destruct;
- (id)_currentLanguageCode;
- (BOOL)isCurrentlyOutputting;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didContinueSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didPauseSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRequest:(id)a2;
- (BOOL)_canOutputPremiumVoice;
- (BOOL)_canSpeakTimeForVoice:(unsigned long long)a0 andGesture:(unsigned long long)a1;
- (BOOL)_canTapticTime;
- (void)_denormalizeVolumeIfNecessary;
- (id)_getPremiumVoiceAsset;
- (void)_normalizeVolumeIfNecessary;
- (void)_outputTapticTime:(id)a0;
- (void)_ringerStateChanged;
- (void)_setupAudioSessionForVoice:(unsigned long long)a0;
- (void)_speakTime:(id)a0 preferredVoice:(unsigned long long)a1;
- (void)_speakTime:(id)a0 withCharacterVoiceIdentifier:(id)a1;
- (id)_ttsSiriVoiceAssetForAFVoice:(id)a0 language:(id)a1;
- (BOOL)avSpeechMode;
- (BOOL)canOutputTime;
- (void)outputTime:(id)a0;
- (void)outputTime:(id)a0 preferredVoice:(unsigned long long)a1;
- (void)outputTime:(id)a0 preferredVoice:(unsigned long long)a1 withGesture:(unsigned long long)a2;
- (void)speechOutputDidComplete;
- (void)stopOutput;

@end
