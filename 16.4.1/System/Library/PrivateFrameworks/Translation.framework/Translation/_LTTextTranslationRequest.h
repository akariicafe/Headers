@class NSString, NSArray, _LTTranslationSession, NSMutableDictionary, NSAttributedString, _LTTextToSpeechTranslationRequest;

@interface _LTTextTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {
    _LTTranslationSession *_session;
    _LTTextToSpeechTranslationRequest *_request;
    NSMutableDictionary *_savedAttributes;
    NSArray *_paragraphOrder;
    unsigned long long _outstandingCount;
    NSMutableDictionary *_receivedParagraphs;
    id /* block */ _done;
    BOOL _translationFinished;
}

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSArray *ignoringAttributes;
@property (copy, nonatomic) id /* block */ textHandler;
@property (copy, nonatomic) id /* block */ translationHandler;
@property (copy, nonatomic) id /* block */ textTranslationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serviceDelegate;
- (void)_handleParagraphResponse:(id)a0 error:(id)a1;
- (void)_constructFinalParagraphResult;
- (id)_paragraphRequestForText:(id)a0;
- (id)_realign:(id)a0 identifier:(id)a1;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)loggingType;
- (void)translationDidFinishWithError:(id)a0;
- (void)translatorDidTranslate:(id)a0;

@end
