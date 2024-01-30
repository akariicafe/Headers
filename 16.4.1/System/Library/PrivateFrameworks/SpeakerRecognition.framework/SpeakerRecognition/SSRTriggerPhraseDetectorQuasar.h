@class _EARSyncSpeechRecognizer, NSString;

@interface SSRTriggerPhraseDetectorQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    NSString *_locale;
}

- (id)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)endAudio;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithLocale:(id)a0 configPath:(id)a1 resourcePath:(id)a2;

@end
