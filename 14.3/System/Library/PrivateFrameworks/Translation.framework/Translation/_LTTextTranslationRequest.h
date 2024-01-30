@class NSString;

@interface _LTTextTranslationRequest : _LTTranslationRequest

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) id /* block */ textHandler;
@property (copy, nonatomic) id /* block */ translationHandler;

- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)loggingType;
- (void)_translationFailedWithError:(id)a0;

@end
