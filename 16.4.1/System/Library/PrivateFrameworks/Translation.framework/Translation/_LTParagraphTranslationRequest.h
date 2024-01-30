@class NSString, NSArray;

@interface _LTParagraphTranslationRequest : _LTTranslationRequest

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *ranges;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (BOOL)_canUseTextService;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_startTranslationWithTextService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)loggingType;
- (id)translationParagraph;

@end
