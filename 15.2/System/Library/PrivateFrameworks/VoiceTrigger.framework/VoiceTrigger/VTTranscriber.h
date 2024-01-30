@class _EARSpeechRecognizer, NSString, NSArray, _EARSpeechRecognitionAudioBuffer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VTTranscriber : NSObject <_EARSpeechRecognitionResultStream> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    id /* block */ _callback;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
}

@property (readonly) double triggerConfidence;
@property (readonly) BOOL isTriggerFollowedByWords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endAudio;
- (void).cxx_destruct;
- (void)reset;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (double)_getConfidence:(id)a0;
- (id)recognizedTokens;
- (id)initWithConfiguration:(id)a0 triggerTokens:(id)a1 useKeywordSpotting:(BOOL)a2;
- (void)runRecognitionWithCallback:(id /* block */)a0;
- (void)recognizeWavData:(const short *)a0 length:(int)a1;

@end
