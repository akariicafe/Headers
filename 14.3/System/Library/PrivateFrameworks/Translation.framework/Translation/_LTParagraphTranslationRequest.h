@class NSString, NSArray;

@interface _LTParagraphTranslationRequest : _LTTranslationRequest

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *ranges;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)loggingType;
- (void)_translationFailedWithError:(id)a0;
- (id)translationParagraph;

@end
