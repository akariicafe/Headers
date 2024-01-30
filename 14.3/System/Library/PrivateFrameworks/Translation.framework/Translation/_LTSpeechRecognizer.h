@class _EARSpeechRecognitionResultPackage, NSString, _EARSpeechRecognitionAudioBuffer, NSURL, NSLocale, NSObject, _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface _LTSpeechRecognizer : NSObject <_EARSpeechRecognitionResultStream> {
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_buffer;
    BOOL _detectedSpeechEndpoint;
    _EARSpeechRecognitionResultPackage *_finalResult;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
}

@property (copy, nonatomic) id /* block */ recognitionHandler;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSLocale *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endAudio;
- (void)cancelRecognition;
- (id)initWithModelURL:(id)a0 language:(id)a1 modelVersion:(id)a2;
- (void)triggerServerSideEndPointer;
- (void)startRecognitionWithAutoStop:(BOOL)a0 resultHandler:(id /* block */)a1;
- (void)addSpeechAudioData:(id)a0;
- (void)_recognizedResult:(id)a0 error:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResultPackage:(id)a1;

@end
