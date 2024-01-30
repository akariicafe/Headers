@class NSString;

@interface EARCSpeechRecognitionResultStreamGlue : NSObject <_EARSpeechRecognitionResultStream> {
    struct EARCSpeechRecognitionResultStream { void *ctx; void /* function */ *DisposeContext; void /* function */ *DidRecognizePartialResultTokens; void /* function */ *DidFinishRecognitionWithError; void /* function */ *DidRecognizeFinalResults; void /* function */ *DidProcessAudioDuration; } _stream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStream:(struct EARCSpeechRecognitionResultStream { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } *)a0;
- (void)dealloc;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didProcessAudioDuration:(double)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1 tokenSausage:(id)a2 nBestChoices:(id)a3;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;

@end
