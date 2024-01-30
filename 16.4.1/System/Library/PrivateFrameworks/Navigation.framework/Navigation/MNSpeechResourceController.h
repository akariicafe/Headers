@class NSString, NSTimer, VSSpeechSynthesizer, NSCache;
@protocol MNSpeechControllerDelegate;

@interface MNSpeechResourceController : NSObject <VSSpeechSynthesizerDelegate> {
    VSSpeechSynthesizer *_synthesizer;
    NSString *_cachedVoiceLanguage;
    NSString *_cachedVoiceName;
    long long _cachedVoiceGender;
    unsigned int _sessionID;
    NSString *_utterance;
    NSTimer *_timer;
    NSCache *_durations;
    unsigned long long _charactersSpokenCount;
    double _charactersSpokenDuration;
    BOOL _currentlySpeaking;
}

@property (weak, nonatomic) id<MNSpeechControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL speaking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithLanguage:(id)a0;
- (void)_cancelTimer;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 withInstrumentMetrics:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSynthesisRequest:(id)a1 withInstrumentMetrics:(id)a2 error:(id)a3;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)_warmUpTTSForLanguage:(id)a0 andVoiceName:(id)a1 andGender:(long long)a2 andAudioSessionID:(unsigned int)a3;
- (BOOL)_createDurationCacheIfNecessary;
- (void)_mediaSessionServicesWereReset:(id)a0;
- (BOOL)cache:(id)a0 withDisclosure:(unsigned long long)a1 andReport:(out id *)a2;
- (BOOL)speak:(id)a0 withDisclosure:(unsigned long long)a1 andReport:(out id *)a2;
- (void)_addDurationToCache:(double)a0 forUtterance:(id)a1;
- (void)_audioSessionInterruption:(id)a0;
- (void)_cachingTimeoutOccurred:(id)a0;
- (double)_clampVolume:(double)a0;
- (void)_createTimerForUtterance:(id)a0 andIsCaching:(BOOL)a1;
- (double)_estimateDurationForUtterance:(id)a0;
- (void)_markVoiceForDownloadingWithLanguage:(id)a0 andVoiceName:(id)a1 andGender:(long long)a2;
- (void)_prepareSynthesizerWithLanguage:(id)a0 andVoiceName:(id)a1 andGender:(long long)a2 andAudioSessionID:(unsigned int)a3;
- (void)_registerForObservation;
- (id)_requestForUtterance:(id)a0 withLanguage:(id)a1 andVoiceName:(id)a2 andGender:(long long)a3 andAudioSessionID:(unsigned int)a4 andCanUseServerTTS:(BOOL)a5;
- (void)_speakingTimeoutOccurred:(id)a0;
- (void)_updateEstimatorWithDuration:(double)a0 andUtterance:(id)a1;
- (double)durationOf:(id)a0;
- (BOOL)stopSpeakingAndReport:(out id *)a0;

@end
