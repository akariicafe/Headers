@class _LTSpeechTranslationResultsBuffer, NSString;
@protocol _LTTranslationEngine, _LTSpeechTranslationDelegate;

@interface _LTCombinedEngine : NSObject <_LTSpeechTranslationDelegate, _LTTranslationEngine> {
    id<_LTSpeechTranslationDelegate> _delegate;
    BOOL _onlineTranslationStarted;
    BOOL _translationEnded;
    BOOL _serverCompleted;
}

@property (retain, nonatomic) _LTSpeechTranslationResultsBuffer *offlineDelegateBuffer;
@property (retain, nonatomic) id<_LTTranslationEngine> offlineEngine;
@property (retain, nonatomic) id<_LTTranslationEngine> onlineEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endpoint;
- (void)endAudio;
- (void).cxx_destruct;
- (id)init;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)addSpeechAudioData:(id)a0;
- (BOOL)translatesPair:(id)a0;
- (void)preheatAsynchronously:(BOOL)a0 withContext:(id)a1;
- (void)setLanguagesRecognized:(id)a0;
- (void)cancelSpeechTranslation;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)hybridEndpointerFoundEndpoint;
- (void)serverEndpointerFeatures:(id)a0 locale:(id)a1;
- (void)speechRecognitionResult:(id)a0;
- (void)translatorDidTranslate:(id)a0;
- (void)translationDidFinishWithError:(id)a0;

@end
