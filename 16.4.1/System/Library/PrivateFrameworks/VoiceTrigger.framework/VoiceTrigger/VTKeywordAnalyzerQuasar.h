@class _EARSpeechRecognizer, NSString, NSDictionary, NSArray, _EARSpeechRecognitionAudioBuffer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, VTKeywordAnalyzerQuasarScoreDelegate;

@interface VTKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
}

@property (retain, nonatomic) NSDictionary *ctcKwdToPhIdMap;
@property (readonly, nonatomic) double triggerConfidence;
@property (nonatomic) unsigned long long activeChannel;
@property (weak, nonatomic) id<VTKeywordAnalyzerQuasarScoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)endAudio;
- (void).cxx_destruct;
- (void)reset;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;
- (double)_getConfidence:(id)a0;
- (id)_phIdToCtcScoreMap;
- (void)_recognizeWavData:(const short *)a0 length:(unsigned long long)a1;
- (id)initWithConfigPath:(id)a0 triggerTokens:(id)a1 useKeywordSpotting:(BOOL)a2;
- (void)runRecognition;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;

@end
