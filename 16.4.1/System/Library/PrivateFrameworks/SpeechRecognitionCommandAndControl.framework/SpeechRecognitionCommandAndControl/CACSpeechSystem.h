@class NSTimer;

@interface CACSpeechSystem : NSObject {
    struct __RXRecognitionSystem { } *_recognitionSystemRef;
    struct __CFLocale { } *_currentLocaleRef;
    struct __RXVocabulary { } *_currentRXVocabularyRef;
    NSTimer *_setLeadingContextStringDelayTimer;
    NSTimer *_setAdditionalContextStringsDelayTimer;
}

@property (readonly) BOOL supportsSpellingMode;

+ (void)initialize;
+ (void)closeSpeechSystem;
+ (BOOL)isSpeechSystemServerRunning;
+ (void)recognizeString:(id)a0;
+ (id)rxContextDictionaryForLanguageModel:(id)a0;
+ (id)speechSystem;
+ (void)startPreventingDisplayDimming;
+ (void)stopPreventingDisplayDimming;
+ (id)valueFromRXContextKey:(id)a0 rxLanguageObject:(struct __RXLanguageObject { } *)a1;

- (void)_close;
- (void).cxx_destruct;
- (id)recognitionLocaleIdentifier;
- (struct __RXLanguageObject { } *)createRXLanguageObjectRefFromCACLanguageModel:(id)a0;
- (struct __RXLanguageObject { } *)createRXLanguageObjectRefFromCACLanguageModel:(id)a0 ignoreBuiltInLMTable:(BOOL)a1;
- (struct __CFLocale { } *)currentLocaleRef;
- (struct __RXVocabulary { } *)currentRXVocabularyRef;
- (id)initLocaleIdentifer:(id)a0 microphoneIdentifier:(id)a1;
- (struct __RXRecognitionSystem { } *)recognitionSystemRef;
- (id)resultLanguageModelFromRXLanguageObject:(struct __RXLanguageObject { } *)a0;
- (void)rxRecognitionSystemReset;
- (void)setAdditionalContextStrings:(id)a0;
- (void)setLeadingContextString:(id)a0;
- (void)setRxRecognitionSystemResetMode:(int)a0;

@end
