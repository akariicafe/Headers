@class NSString, NSMutableDictionary, _LTTranslationResult, NSError;
@protocol _LTSpeechTranslationDelegate;

@interface _LTSpeechTranslationResultsBuffer : NSObject <_LTSpeechTranslationDelegate> {
    BOOL _isBuffering;
    NSMutableDictionary *_lastASRResults;
    _LTTranslationResult *_translationResult;
    BOOL _didFinish;
    NSError *_error;
}

@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasFailed;
- (void).cxx_destruct;
- (id)init;
- (void)stopBuffering;
- (BOOL)hasResults;
- (void)speechRecognitionResult:(id)a0;
- (void)translatorDidTranslate:(id)a0;
- (void)translationDidFinishWithError:(id)a0;

@end
