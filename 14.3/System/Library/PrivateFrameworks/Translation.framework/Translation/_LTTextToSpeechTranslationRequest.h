@class NSString, NSObject;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;

@interface _LTTextToSpeechTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> _service;
    id /* block */ _done;
}

@property (copy, nonatomic) NSString *text;
@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)requestContext;
- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0;
- (id)loggingType;
- (void)_translationFailedWithError:(id)a0;
- (id)nativeAudioFormat;
- (void)translatorDidTranslate:(id)a0;
- (void)translationDidFinishWithError:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;

@end
