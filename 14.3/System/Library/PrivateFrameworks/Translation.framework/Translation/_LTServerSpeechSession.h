@class NSUUID, _LTLanguageDetector, _LTHybridEndpointer, NSString, NSObject;
@protocol _LTTranslationEngine, _LTSpeechTranslationDelegate, OS_dispatch_queue;

@interface _LTServerSpeechSession : NSObject <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _expectFinalLidResult;
    BOOL _sentFinalLidResult;
    BOOL _translationFinishedWithoutError;
}

@property (retain, nonatomic) id<_LTTranslationEngine> engine;
@property (retain, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) _LTLanguageDetector *languageDetector;
@property (readonly, nonatomic) _LTHybridEndpointer *endpointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithEngine:(id)a0 delegate:(id)a1;
- (void)delegateTranslationDidFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)startSpeechTranslationWithContext:(id)a0;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)speechRecognitionResult:(id)a0;
- (void)translatorDidTranslate:(id)a0;
- (void)translationDidFinishWithError:(id)a0;
- (void)languageDetectionResult:(id)a0;
- (void)languageDetectionCompleted;
- (void)hybridEndpointerFoundEndpoint;
- (void)serverEndpointerFeatures:(id)a0 locale:(id)a1;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;

@end
