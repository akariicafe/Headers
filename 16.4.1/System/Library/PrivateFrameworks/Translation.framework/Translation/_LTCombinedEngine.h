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

- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)endpoint;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)endAudio;
- (id)init;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)addSpeechAudioData:(id)a0;
- (void).cxx_destruct;
- (BOOL)translatesPair:(id)a0;
- (void)cancelSpeechTranslation;
- (void)hybridEndpointerFoundEndpoint;
- (void)preheatAsynchronously:(BOOL)a0 withContext:(id)a1;
- (void)serverEndpointerFeatures:(id)a0 locale:(id)a1;
- (void)setLanguagesRecognized:(id)a0;
- (void)speechRecognitionResult:(id)a0;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)translationDidFinishWithError:(id)a0;
- (void)translatorDidTranslate:(id)a0;

@end
