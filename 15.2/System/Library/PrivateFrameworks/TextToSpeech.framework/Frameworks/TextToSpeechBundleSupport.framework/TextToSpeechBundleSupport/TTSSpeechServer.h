@class TTSSpeechServerInstance, NSString, NSMutableDictionary;

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting> {
    NSMutableDictionary *_serverInstances;
}

@property (retain, nonatomic) TTSSpeechServerInstance *speechInitializationInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regexRules;

- (id)audioFileSettingsForVoice:(id)a0;
- (oneway void)continueSpeechRequest:(id)a0;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (id)supportedIPAPhonemeLanguages;
- (oneway void)startSpeechRequest:(id)a0;
- (id)init;
- (void)dealloc;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)initializeSpeechServerInstance:(unsigned long long)a0;
- (void)synthesizerInstanceDestroyed:(unsigned long long)a0;
- (void)setServiceQueue:(id)a0 forSynthesizerInstanceID:(unsigned long long)a1;
- (oneway void)getVoicesForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (id)speechMarkupStringForType:(long long)a0 voice:(id)a1 string:(id)a2;
- (BOOL)isVoiceValid:(id)a0;
- (BOOL)employSpeechMarkupForType:(long long)a0 language:(id)a1;
- (id)lhPhonemesFromIPA:(id)a0 language:(id)a1;
- (id)phonemesFromIPA:(id)a0 language:(id)a1;
- (id)enclosedStringWithPhonemes:(id)a0;
- (id)nashvilleVoiceIdentifier:(id)a0 footprint:(long long)a1 voiceType:(long long)a2 gender:(long long)a3 assetVoiceName:(id)a4;
- (id)nashvilleVoiceName:(id)a0 footprint:(long long)a1 voiceType:(long long)a2 gender:(long long)a3 assetVoiceName:(id)a4;
- (id)embeddedRateMarkupForVoice:(id)a0 string:(id)a1 rate:(double)a2;
- (id)embeddedPitchMarkupForVoice:(id)a0 string:(id)a1 pitch:(double)a2;
- (id)embeddedVolumeMarkupForVoice:(id)a0 string:(id)a1 volume:(double)a2;
- (BOOL)isSiriService;
- (BOOL)isNashvilleService;
- (BOOL)isSiriNeuralVoice:(id)a0;
- (id)getVocalizerWithLanguage:(struct __CFString { } *)a0 defaultLanguage:(struct __CFString { } *)a1 reinitIfNecessary:(unsigned char)a2 instanceToDestroy:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a3 forceReinit:(unsigned char)a4 voiceType:(long long)a5 gender:(long long)a6 footprint:(long long)a7 voiceName:(struct __CFString { } *)a8 error:(unsigned int *)a9;
- (struct __CFArray { } *)loadedVoiceResources;
- (id)getNewSpeechServerInstance;
- (void)nashvilleVoiceIdentifier:(id)a0 footprint:(long long)a1 voiceType:(long long)a2 gender:(long long)a3 assetVoiceName:(id)a4 voiceId:(id *)a5 voiceName:(id *)a6;
- (id)_ttsCopyVoiceInfo:(id)a0 type:(long long)a1 queryingMobileAssets:(BOOL)a2;
- (id)_behavesBadlyWithSpellMarkupForVoice:(id)a0 string:(id)a1 markupType:(long long)a2;
- (BOOL)canInitializeSpeech:(id)a0;
- (BOOL)requiresLHPPhonemes;

@end
