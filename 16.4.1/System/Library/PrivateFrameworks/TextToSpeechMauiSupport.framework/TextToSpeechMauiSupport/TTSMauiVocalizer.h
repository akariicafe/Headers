@interface TTSMauiVocalizer : TTSVocalizer {
    struct _VE_HSAFE { void *pHandleData; unsigned int u32Check; } _veInstance;
    struct _VE_HSAFE { void *pHandleData; unsigned int u32Check; } _ttsVocalizerHSpeech;
    struct _VE_HSAFE { void *x0; unsigned int x1; } *_ttsVocalizerHSpeechPtr;
    char *_ttsVocalizerCurrentLanguageName;
    char *_ttsVocalizerDefaultVoiceName;
}

- (id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(char **)a0 desiredFootprint:(long long)a1 languageCode:(struct __CFString { } *)a2 voiceType:(long long)a3;
- (double)_ttsMauiVocalizerGetSampleRateFromEnum:(int)a0;
- (void)_ttsVocalizerDestroy;
- (void)_ttsVocalizerDestroyInstance;
- (unsigned int)_ttsVocalizerGetActiveLanguage:(struct _VE_HSAFE { void *x0; unsigned int x1; })a0 language:(char **)a1;
- (double)_ttsVocalizerGetSampleRate;
- (id)_ttsVocalizerProcessText:(struct __CFString { } *)a0 callback:(void *)a1 context:(void *)a2;
- (unsigned int)_ttsVocalizerReallyLoadResource:(const char *)a0 rules:(struct __CFData { } *)a1 resource:(struct _VE_HSAFE { void *x0; unsigned int x1; } *)a2 supportsAccurateWordCallbacks:(unsigned char)a3 resourceIdentifier:(id)a4;
- (id)_ttsVocalizerSetParameters:(float)a0 pitch:(float)a1 volume:(float)a2 footprintID:(long long)a3;
- (id)initWithLanguage:(id)a0 defaultLanguage:(id)a1 reinitIfNecessary:(BOOL)a2 forceReinit:(BOOL)a3 voiceType:(long long)a4 gender:(long long)a5 footprint:(long long)a6 voiceName:(id)a7 voiceIdentifier:(id)a8 error:(id *)a9;
- (BOOL)readyForSynthesis;

@end
