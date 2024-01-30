@class NSString;

@interface TTSVocalizer : NSObject

@property (nonatomic) void *ttsVocalizerDataClass;
@property (retain, nonatomic) struct __CFArray { } *ttsVocalizerResourceDataPtrs;
@property (retain, nonatomic) struct __CFData { } *ttsVocalizerRulesetData;
@property (retain, nonatomic) NSString *ttsVocalizerCurrentLanguageCode;
@property (nonatomic) long long speechGender;

- (void)dealloc;
- (void)stopSynthesis;
- (BOOL)readyForSynthesis:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a0;
- (id)initWithLanguage:(struct __CFString { } *)a0 defaultLanguage:(struct __CFString { } *)a1 reinitIfNecessary:(unsigned char)a2 instanceToDestroy:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a3 forceReinit:(unsigned char)a4 voiceType:(long long)a5 gender:(long long)a6 footprint:(long long)a7 voiceName:(struct __CFString { } *)a8 error:(unsigned int *)a9;
- (unsigned char)_ttsVocalizerDefaultVoiceIsFallback;
- (long long)_ttsVocalizerSpeechGender;
- (unsigned int)_ttsVocalizerDestroy;
- (unsigned int)_ttsVocalizerCopyAvailableVoiceInfo:(const struct __CFArray **)a0;
- (void)_ttsVocalizerLoadProgrammaticRules:(struct _VE_HSAFE { void *x0; unsigned int x1; })a0 supportsAccurateWordCallbacks:(unsigned char)a1 forTests:(unsigned char)a2;
- (unsigned int)_ttsVocalizerReallyLoadResource:(struct _VE_HSAFE { void *x0; unsigned int x1; })a0 mimeType:(const char *)a1 rules:(struct __CFData { } *)a2 resource:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a3 supportsAccurateWordCallbacks:(unsigned char)a4 resourceIdentifier:(id)a5;
- (void)loadResource:(struct _VE_HSAFE { void *x0; unsigned int x1; })a0 mimeType:(struct __CFString { } *)a1 resourceURL:(struct __CFURL { } *)a2 supportsAccurateWordCallbacks:(unsigned char)a3;
- (struct __CFArray { } *)_ttsVocalizerLoadedResources;
- (BOOL)_ttsVocalizerIsInitialized;
- (unsigned int)_ttsVocalizerVoiceInfoForActiveLanguage:(struct { char x0[128]; char x1[128]; char x2[128]; char x3[128]; char x4[128]; unsigned short x5; } *)a0;
- (unsigned int)_ttsVocalizerCreateInstance:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a0 desiredVoiceName:(char **)a1 desiredFootprint:(long long)a2 languageCode:(struct __CFString { } *)a3 voiceType:(long long)a4;
- (unsigned int)_ttsVocalizerDestroyInstance:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a0;
- (double)_ttsVocalizerGetSampleRate:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a0;
- (unsigned int)_ttsVocalizerSetParameters:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a0 rate:(float)a1 pitch:(float)a2 volume:(float)a3 footprintID:(long long)a4;
- (unsigned int)_ttsVocalizerProcessText:(struct __CFString { } *)a0 instance:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a1 callback:(void /* function */ *)a2 context:(void *)a3;
- (unsigned int)_ttsVocalizerAppendPhonemeToString:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a0 phoneme:(unsigned short)a1 phonemeString:(struct __CFString { } *)a2;

@end
