@class NSArray;

@interface _LTBatchTextTranslationRequest : _LTTranslationRequest

@property (copy, nonatomic) NSArray *paragraphs;
@property (copy, nonatomic) id /* block */ textHandler;
@property (copy, nonatomic) id /* block */ translationHandler;

- (void).cxx_destruct;
- (void)_translationFailedWithError:(id)a0;
- (id)loggingType;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;

@end
