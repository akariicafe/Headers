@class NSTimer;

@interface CACSpeechSystem : NSObject {
    struct __RXRecognitionSystem { } *_recognitionSystemRef;
    struct __CFLocale { } *_currentLocaleRef;
    struct __RXVocabulary { } *_currentRXVocabularyRef;
    NSTimer *_setLeadingContextStringDelayTimer;
    NSTimer *_setAdditionalContextStringsDelayTimer;
}

+ (void)initialize;
+ (id)speechSystem;
+ (void)closeSpeechSystem;
+ (void)recognizeString:(id)a0;
+ (void)stopPreventingDisplayDimming;
+ (void)startPreventingDisplayDimming;
+ (id)rxContextDictionaryForLanguageModel:(id)a0;
+ (id)valueFromRXContextKey:(id)a0 rxLanguageObject:(struct __RXLanguageObject { } *)a1;
+ (BOOL)isSpeechSystemServerRunning;

- (void)_close;
- (void).cxx_destruct;
- (id)recognitionLocaleIdentifier;
- (void)setLeadingContextString:(id)a0;
- (void)setAdditionalContextStrings:(id)a0;
- (struct __RXLanguageObject { } *)createRXLanguageObjectRefFromCACLanguageModel:(id)a0 ignoreBuiltInLMTable:(BOOL)a1;
- (struct __RXRecognitionSystem { } *)recognitionSystemRef;
- (id)initLocaleIdentifer:(id)a0 microphoneIdentifier:(id)a1;
- (struct __CFLocale { } *)currentLocaleRef;
- (struct __RXVocabulary { } *)currentRXVocabularyRef;
- (id)resultLanguageModelFromRXLanguageObject:(struct __RXLanguageObject { } *)a0;
- (struct __RXLanguageObject { } *)createRXLanguageObjectRefFromCACLanguageModel:(id)a0;

@end
