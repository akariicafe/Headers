@class NSString;

@interface _LTOfflineSpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate> {
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (long long)preferredVoiceGender;

- (id)initWithCompletion:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 withInstrumentMetrics:(id)a2;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRequest:(id)a2;
- (void)speak:(id)a0 withContext:(id)a1;

@end
