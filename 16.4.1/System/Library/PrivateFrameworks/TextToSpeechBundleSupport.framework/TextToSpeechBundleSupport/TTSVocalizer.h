@class NSString;

@interface TTSVocalizer : NSObject

@property (nonatomic) struct { char *x0; char *x1; char *x2; BOOL x3; int x4; unsigned long long x5; int x6; char *x7[3]; struct __CFString *x8; long long x9; long long x10; long long x11; struct __CFString *x12; } *ttsVocalizerDataClass;
@property (retain, nonatomic) struct __CFArray { } *ttsVocalizerResourceDataPtrs;
@property (retain, nonatomic) struct __CFData { } *ttsVocalizerRulesetData;
@property (retain, nonatomic) NSString *ttsVocalizerCurrentLanguageCode;
@property (nonatomic) long long speechGender;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopSynthesis;
- (id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(id)a0 desiredFootprint:(long long)a1 languageCode:(id)a2 voiceType:(long long)a3;
- (void)_ttsVocalizerDestroy;
- (void)_ttsVocalizerDestroyInstance;
- (double)_ttsVocalizerGetSampleRate;
- (unsigned int)_ttsVocalizerReallyLoadResource:(const char *)a0 rules:(id)a1 resource:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a2 supportsAccurateWordCallbacks:(BOOL)a3 resourceIdentifier:(id)a4;
- (id)_ttsVocalizerSetParameters:(float)a0 pitch:(float)a1 volume:(float)a2 footprintID:(long long)a3;
- (id)initWithLanguage:(id)a0 defaultLanguage:(id)a1 reinitIfNecessary:(BOOL)a2 forceReinit:(BOOL)a3 voiceType:(long long)a4 gender:(long long)a5 footprint:(long long)a6 voiceName:(id)a7 voiceIdentifier:(id)a8 error:(id *)a9;
- (BOOL)readyForSynthesis;
- (id)_ttsVocalizerAppendPhonemeToString:(unsigned short)a0 phonemeString:(id)a1;
- (id)_ttsVocalizerAssetPath:(long long)a0;
- (id)_ttsVocalizerCopyAvailableVoiceInfo:(const struct __CFArray **)a0;
- (unsigned char)_ttsVocalizerDefaultVoiceIsFallback;
- (BOOL)_ttsVocalizerIsInitialized;
- (void)_ttsVocalizerLoadProgrammaticRules:(BOOL)a0 forTests:(BOOL)a1;
- (struct __CFArray { } *)_ttsVocalizerLoadedResources;
- (long long)_ttsVocalizerSpeechGender;
- (void)loadResource:(id)a0 resourceURL:(id)a1 supportsAccurateWordCallbacks:(BOOL)a2;

@end
