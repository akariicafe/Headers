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
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)nativeAudioFormat;
- (id)initWithLocalePair:(id)a0;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)initWithLocalePair:(id)a0 suggestedUniqueID:(id)a1;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 suggestedUniqueID:(id)a2;
- (id)loggingType;
- (void)translationDidFinishWithError:(id)a0;
- (void)translatorDidTranslate:(id)a0;

@end
