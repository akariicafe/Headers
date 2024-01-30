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

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasFailed;
- (void)speechRecognitionResult:(id)a0;
- (void)translatorDidTranslate:(id)a0;
- (void)translationDidFinishWithError:(id)a0;
- (void)stopBuffering;
- (BOOL)hasResults;

@end
